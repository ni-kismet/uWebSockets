#ifndef REMOVESSL_H
#define REMOVESSL_H

#define SSL void
#define SSL_CTX void

#define SSL_free(...)
#define SSL_shutdown(...)
#define SSL_set_mode(...)
#define SSL_set_fd(...)
#define SSL_get_error(...) 0
#define SSL_write(...) 0
#define SSL_read(...) 0
#define SSL_pending(...) false
#define SSL_want(...) 0
#define SSL_new(...)
#define SSL_set_connect_state(...)
#define SSL_set_tlsext_host_name(...)
#define SSL_set_accept_state(...)
#define SSL_CTX_free(...)
#define SSL_CTX_new(...)
#define SSL_CTX_use_PrivateKey_file(...)
#define SSL_CTX_use_certificate_chain_file(...) 0
#define SSL_CTX_set_default_passwd_cb(...)
#define SSL_CTX_set_options(...)
#define SSL_CTX_set_default_passwd_cb_userdata(...)

#define SSL_ERROR_WANT_READ 2
#define SSL_ERROR_WANT_WRITE 3

#define SSL_WRITING 2
#define SSL_READING 3
#endif