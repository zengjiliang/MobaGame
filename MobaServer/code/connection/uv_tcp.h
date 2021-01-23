#ifndef	__UV_TCP_H__
#define	__UV_TCP_H__
#include "uv.h"
#include "../utils/utils.h"
#ifdef __cplusplus
extern "C" {
#endif
	uv_loop_t* uv_loop = NULL;
	uv_tcp_t *tcp_server = NULL;
	void tcp_uv_on_close(uv_handle_t* handle);
	void tcp_uv_on_shutdown(uv_shutdown_t* req, int status);
	void tcp_uv_after_write(uv_write_t* req, int status);
	void tcp_uv_after_read(uv_stream_t* stream, ssize_t nread, const uv_buf_t* buf);
	void tcp_uv_alloc_buf(uv_handle_t* handle, size_t suggested_size, uv_buf_t* buf);
	void tcp_uv_connection(uv_stream_t* server, int status);
	void tcp_uv_init(uv_loop_t* uv_loop, uv_tcp_t* tcp_server);

#ifdef __cplusplus
}
#endif

#endif//__UV_TCP_H__
