void config(char *file, int unit);
int do_config(char *buff, struct socket *inso, int type);
int get_port(char *buff, int proto_tcp);
int cfg_redir_x(char *buff, struct socket *inso);
int cfg_setunit(char *buff, struct socket *inso);
int cfg_redir(char *buff, struct socket *inso);
int cfg_baudrate(char *buff, struct socket *inso);
int cfg_wait(char *buff, struct socket *inso);
int cfg_sp_addr(char *buff, struct socket *inso);
int cfg_ctl_addr(char *buff, struct socket *inso);
int cfg_compress(char *buff, struct socket *inso);
int cfg_host_addr(char *buff, struct socket *inso);
int cfg_add_exec(char *buff, struct socket *inso);
int cfg_add_ptyexec(char *buff, struct socket *inso);
int cfg_shell(char *buff, struct socket *inso);
int cfg_debug(char *buff, struct socket *inso);
int cfg_logstart(char *buff, struct socket *inso);
int cfg_logstats(char *buff, struct socket *inso);
int cfg_config(char *buff, struct socket *inso);
int cfg_help(char *buff, struct socket *inso);
int cfg_stats(char *buff, struct socket *inso);
int cfg_echo(char *buff, struct socket *inso);
int cfg_kill_close(int x, int type);
int cfg_quit(char *buff, struct socket *inso);
int cfg_pass(char *buff, struct socket *inso);
int cfg_kill(char *buff, struct socket *inso);
int cfg_close(char *buff, struct socket *inso);
int cfg_exec(char *buff, struct socket *inso);
int cfg_ptyexec(char *buff, struct socket *inso);
int cfg_add_emu(char *buff, struct socket *inso);
int cfg_socket(char *buff, struct socket *inso);
int cfg_dns(char *buff, struct socket *inso);
int cfg_keepalive(char *buff, struct socket *inso);
int cfg_version(char *buff, struct socket *inso);
int cfg_towrite_max(char *buff, struct socket *inso);
int cfg_ppp_exit(char *buff, struct socket *inso);
void setipdefault(int unit);
int getword(FILE *f, char *word, int *newlinep, char *filename);
u_int number_option(char *str, u_int32_t *valp, int base);
u_int int_option(char *str, int *valp);
int cfg_ppp(char *buff, struct socket *inso);
int setdebug(char *buff, struct socket *inso);
int noopt(char *buff, struct socket *inso);
int noaccomp(char *buff, struct socket *inso);
int noasyncmap(char *buff, struct socket *inso);
int noipaddr(char *buff, struct socket *inso);
int nomagicnumber(char *buff, struct socket *inso);
int nomru(char *buff, struct socket *inso);
int setmru(char *opt_arg, struct socket *inso);
int setmtu(char *opt_arg, struct socket *inso);
int nopcomp(char *buff, struct socket *inso);
int setinitopt(char *buff, struct socket *inso);
int nopap(char *buff, struct socket *inso);
int reqpap(char *buff, struct socket *inso);
int setupapfile(char *opt_arg, struct socket *inso);
int nochap(char *buff, struct socket *inso);
int reqchap(char *buff, struct socket *inso);
int setnovj(char *buff, struct socket *inso);
int setnovjccomp(char *buff, struct socket *inso);
int setvjslots(char *opt_arg, struct socket *inso);
int setdomain(char *opt_arg, struct socket *inso);
int setasyncmap(char *opt_arg, struct socket *inso);
int setescape(char *opt_arg, struct socket *inso);
int setipcpaccl(char *buff, struct socket *inso);
int setipcpaccr(char *buff, struct socket *inso);
int setusehostname(char *buff, struct socket *inso);
int setname(char *opt_arg, struct socket *inso);
int set_user(char *opt_arg, struct socket *inso);
int setremote(char *opt_arg, struct socket *inso);
int setauth(char *buff, struct socket *inso);
int setproxyarp(char *buff, struct socket *inso);
int setdologin(char *buff, struct socket *inso);
int setlcpechointv(char *opt_arg, struct socket *inso);
int setlcpechofails(char *opt_arg, struct socket *inso);
int setlcptimeout(char *opt_arg, struct socket *inso);
int setlcpterm(char *opt_arg, struct socket *inso);
int setlcpconf(char *opt_arg, struct socket *inso);
int setlcpfails(char *opt_arg, struct socket *inso);
int setipcptimeout(char *opt_arg, struct socket *inso);
int setipcpterm(char *opt_arg, struct socket *inso);
int setipcpconf(char *opt_arg, struct socket *inso);
int setipcpfails(char *opt_arg, struct socket *inso);
int setpaptimeout(char *opt_arg, struct socket *inso);
int setpapreqs(char *opt_arg, struct socket *inso);
int setchaptimeout(char *opt_arg, struct socket *inso);
int setchapchal(char *opt_arg, struct socket *inso);
int setchapintv(char *opt_arg, struct socket *inso);
int setpapreqtime(char *opt_arg, struct socket *inso);
int setbsdcomp(char *opt_arg, struct socket *inso);
int setnobsdcomp(char *opt_arg, struct socket *inso);
int setpapcrypt(char *opt_arg, struct socket *inso);
