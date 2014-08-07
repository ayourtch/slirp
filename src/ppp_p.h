void stuff_char(int c, int unit, struct ppp_out *outp);
void add_fcs(struct ppp_out *outp, int unit);
int check_fcs(u_char *buff, int len);
int sifdown(int unit);
int sifup(int unit);
void ppp_recv_config (int unit, int mru, u_int32_t asyncmap, int pcomp, int accomp);
void ppp_set_xaccm(int unit, u_int32_t *accm);
void ppp_send_config (int unit, int mtu, u_int32_t asyncmap, int pcomp, int accomp);
void sifvjcomp (int unit, int vjcomp, int cidcomp, int maxcid);
void doframe(struct ttys *ttyp);
void ppp_input(struct ttys *ttyp, u_char *if_bptr, int if_n);
int ppp_encap(char *inbptr, struct mbuf *m, int unit, int ppp_esc, int proto);
void ppp_init(struct ttys *ttyp);
void ppp_start(int unit);
int sifaddr (int unit, int our_adr, int his_adr, int net_mask);
int cifaddr (int unit, int our_adr, int his_adr);
int sifdefaultroute (int unit, int gateway);
int cifdefaultroute (int unit, int gateway);
int cifproxyarp (int unit, u_long his_adr);
int sifproxyarp (int unit, u_long his_adr);
int run_program(char *prog, char **args, int must_exist);
int ccp_test(int unit, u_char *ccp_option, int opt_len, int for_transmit);
void ccp_flags_set(int unit, int isopen, int isup);
int ccp_fatal_error(int unit);
void ppp_ccp(struct ttys *ttyp, u_char *dp, int len, int rcvd);
void ppp_ccp_closed(struct ttys *ttyp);