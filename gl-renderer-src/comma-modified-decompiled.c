typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef int    sdword;
typedef long long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[40];
};

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

typedef qword uint64_t;

typedef int __pid_t;


// WARNING! conflicting data type names: /DWARF/size_t - /stddef.h/size_t

typedef int __clockid_t;

typedef word uint16_t;

typedef ushort GLushort;


// WARNING! conflicting data type names: /DWARF/__off_t - /types.h/__off_t

typedef sdword int32_t;

typedef float khronos_float_t;

typedef dword uint32_t;

typedef uint sizetype;

typedef uint GLuint;

typedef bool _Bool;

typedef uchar uint8_t;

typedef sqword int64_t;

typedef int GLint;

typedef uint GLenum;

typedef uint EGLBoolean;

typedef uint EGLenum;

typedef struct gbm_buffer gbm_buffer, *Pgbm_buffer;

typedef struct wl_resource wl_resource, *Pwl_resource;

typedef struct weston_compositor weston_compositor, *Pweston_compositor;

typedef struct gbm_bo gbm_bo, *Pgbm_bo;

typedef struct gbm_device gbm_device, *Pgbm_device;

typedef struct gbm_surface gbm_surface, *Pgbm_surface;

typedef void (*gbm_buffer_user_data_destroy_func)(struct gbm_buffer *);

typedef struct wl_signal wl_signal, *Pwl_signal;

typedef struct wl_display wl_display, *Pwl_display;

typedef struct weston_shell_interface weston_shell_interface, *Pweston_shell_interface;

typedef struct shell_surface shell_surface, *Pshell_surface;

typedef struct weston_surface weston_surface, *Pweston_surface;

typedef struct weston_shell_client weston_shell_client, *Pweston_shell_client;

typedef struct weston_view weston_view, *Pweston_view;

typedef struct weston_output weston_output, *Pweston_output;

typedef struct pixman_region32 pixman_region32, *Ppixman_region32;

typedef struct pixman_region32 pixman_region32_t;

typedef struct weston_mode weston_mode, *Pweston_mode;

typedef enum dpms_enum {
    WESTON_DPMS_ON=0,
    WESTON_DPMS_STANDBY=1,
    WESTON_DPMS_SUSPEND=2,
    WESTON_DPMS_OFF=3
} dpms_enum;

typedef struct weston_pointer weston_pointer, *Pweston_pointer;

typedef __pid_t pid_t;

typedef struct weston_config weston_config, *Pweston_config;

typedef struct wl_event_loop wl_event_loop, *Pwl_event_loop;

typedef struct wl_event_source wl_event_source, *Pwl_event_source;

typedef struct weston_layer weston_layer, *Pweston_layer;

typedef struct wl_list wl_list, *Pwl_list;

typedef struct weston_pointer_grab_interface weston_pointer_grab_interface, *Pweston_pointer_grab_interface;

typedef struct weston_pointer_grab weston_pointer_grab, *Pweston_pointer_grab;

typedef int32_t wl_fixed_t;

typedef struct weston_plane weston_plane, *Pweston_plane;

typedef struct weston_renderer weston_renderer, *Pweston_renderer;

typedef enum pixman_format_code_t {
    PIXMAN_a1=16846848,
    PIXMAN_g1=17104896,
    PIXMAN_a4=67190784,
    PIXMAN_r1g2b1=67240225,
    PIXMAN_a1r1g1b1=67244305,
    PIXMAN_b1g2r1=67305761,
    PIXMAN_a1b1g1r1=67309841,
    PIXMAN_c4=67371008,
    PIXMAN_g4=67436544,
    PIXMAN_x4a4=134299648,
    PIXMAN_a8=134316032,
    PIXMAN_r3g3b2=134349618,
    PIXMAN_a2r2g2b2=134357538,
    PIXMAN_b2g3r3=134415154,
    PIXMAN_a2b2g2r2=134423074,
    PIXMAN_c8=134479872,
    PIXMAN_x4c4=134479872,
    PIXMAN_g8=134545408,
    PIXMAN_x4g4=134545408,
    PIXMAN_yv12=201785344,
    PIXMAN_x4r4g4b4=268567620,
    PIXMAN_x1r5g5b5=268567893,
    PIXMAN_r5g6b5=268567909,
    PIXMAN_a1r5g5b5=268571989,
    PIXMAN_a4r4g4b4=268584004,
    PIXMAN_x4b4g4r4=268633156,
    PIXMAN_x1b5g5r5=268633429,
    PIXMAN_b5g6r5=268633445,
    PIXMAN_a1b5g5r5=268637525,
    PIXMAN_a4b4g4r4=268649540,
    PIXMAN_yuy2=268828672,
    PIXMAN_r8g8b8=402786440,
    PIXMAN_b8g8r8=402851976,
    PIXMAN_x14r6g6b6=537003622,
    PIXMAN_x8r8g8b8=537004168,
    PIXMAN_x2r10g10b10=537004714,
    PIXMAN_a2r10g10b10=537012906,
    PIXMAN_a8r8g8b8=537036936,
    PIXMAN_x8b8g8r8=537069704,
    PIXMAN_x2b10g10r10=537070250,
    PIXMAN_a2b10g10r10=537078442,
    PIXMAN_a8b8g8r8=537102472,
    PIXMAN_b8g8r8x8=537397384,
    PIXMAN_b8g8r8a8=537430152,
    PIXMAN_r8g8b8x8=537462920,
    PIXMAN_r8g8b8a8=537495688,
    PIXMAN_a8r8g8b8_sRGB=537561224
} pixman_format_code_t;

typedef struct weston_buffer weston_buffer, *Pweston_buffer;

typedef struct linux_dmabuf_buffer linux_dmabuf_buffer, *Plinux_dmabuf_buffer;

typedef struct weston_backend weston_backend, *Pweston_backend;

typedef struct weston_launcher weston_launcher, *Pweston_launcher;

typedef struct xkb_rule_names xkb_rule_names, *Pxkb_rule_names;

typedef struct xkb_context xkb_context, *Pxkb_context;

typedef struct weston_xkb_info weston_xkb_info, *Pweston_xkb_info;

typedef __clockid_t clockid_t;

typedef union gbm_bo_handle gbm_bo_handle, *Pgbm_bo_handle;

typedef struct weston_buffer_reference weston_buffer_reference, *Pweston_buffer_reference;

typedef struct weston_buffer_viewport weston_buffer_viewport, *Pweston_buffer_viewport;

typedef struct weston_surface_state weston_surface_state, *Pweston_surface_state;

typedef struct weston_matrix weston_matrix, *Pweston_matrix;

typedef struct weston_timeline_object weston_timeline_object, *Pweston_timeline_object;

typedef struct weston_layer_entry weston_layer_entry, *Pweston_layer_entry;

typedef struct anon_struct_72_9_ecb20bd5_for_geometry anon_struct_72_9_ecb20bd5_for_geometry, *Panon_struct_72_9_ecb20bd5_for_geometry;

typedef struct anon_struct_260_7_5f24e1b3_for_transform anon_struct_260_7_5f24e1b3_for_transform, *Panon_struct_260_7_5f24e1b3_for_transform;

typedef struct wl_global wl_global, *Pwl_global;

typedef struct weston_output_zoom weston_output_zoom, *Pweston_output_zoom;

typedef struct pixman_box32 pixman_box32, *Ppixman_box32;

typedef struct pixman_box32 pixman_box32_t;

typedef struct pixman_region32_data pixman_region32_data, *Ppixman_region32_data;

typedef struct pixman_region32_data pixman_region32_data_t;

typedef struct anon_struct_8_2_e0eab763_for_hdcp_protocol anon_struct_8_2_e0eab763_for_hdcp_protocol, *Panon_struct_8_2_e0eab763_for_hdcp_protocol;

typedef struct anon_struct_4_1_cb8904c5_for_hdr_info anon_struct_4_1_cb8904c5_for_hdr_info, *Panon_struct_4_1_cb8904c5_for_hdr_info;

typedef struct weston_seat weston_seat, *Pweston_seat;

typedef enum weston_led {
    LED_NUM_LOCK=1,
    LED_CAPS_LOCK=2,
    LED_SCROLL_LOCK=4
} weston_led;

typedef struct wl_listener wl_listener, *Pwl_listener;

typedef union anon_union_4_2_5ca4fa70_for_weston_buffer_3 anon_union_4_2_5ca4fa70_for_weston_buffer_3, *Panon_union_4_2_5ca4fa70_for_weston_buffer_3;

typedef void (*dmabuf_user_data_destroy_func)(struct linux_dmabuf_buffer *);

typedef struct xkb_keymap xkb_keymap, *Pxkb_keymap;

typedef uint32_t xkb_mod_index_t;

typedef uint32_t xkb_led_index_t;

typedef struct anon_struct_24_6_de8b5042_for_buffer anon_struct_24_6_de8b5042_for_buffer, *Panon_struct_24_6_de8b5042_for_buffer;

typedef struct anon_struct_8_2_6a0cb59c_for_surface anon_struct_8_2_6a0cb59c_for_surface, *Panon_struct_8_2_6a0cb59c_for_surface;

typedef struct weston_transform weston_transform, *Pweston_transform;

typedef struct weston_animation weston_animation, *Pweston_animation;

typedef struct weston_spring weston_spring, *Pweston_spring;

typedef struct weston_fixed_point weston_fixed_point, *Pweston_fixed_point;

typedef struct weston_keyboard weston_keyboard, *Pweston_keyboard;

typedef struct weston_touch weston_touch, *Pweston_touch;

typedef enum weston_keyboard_modifier {
    MODIFIER_CTRL=1,
    MODIFIER_ALT=2,
    MODIFIER_SUPER=4,
    MODIFIER_SHIFT=8
} weston_keyboard_modifier;

typedef struct weston_data_source weston_data_source, *Pweston_data_source;

typedef struct input_method input_method, *Pinput_method;

typedef void (*wl_notify_func_t)(struct wl_listener *, void *);

typedef struct wl_shm_buffer wl_shm_buffer, *Pwl_shm_buffer;

typedef struct weston_keyboard_grab weston_keyboard_grab, *Pweston_keyboard_grab;

typedef struct wl_array wl_array, *Pwl_array;

typedef struct anon_struct_16_4_35bc1e51_for_modifiers anon_struct_16_4_35bc1e51_for_modifiers, *Panon_struct_16_4_35bc1e51_for_modifiers;

typedef struct anon_struct_8_2_fc537192_for_xkb_state anon_struct_8_2_fc537192_for_xkb_state, *Panon_struct_8_2_fc537192_for_xkb_state;

typedef struct weston_touch_grab weston_touch_grab, *Pweston_touch_grab;

typedef struct weston_keyboard_grab_interface weston_keyboard_grab_interface, *Pweston_keyboard_grab_interface;

typedef struct xkb_state xkb_state, *Pxkb_state;

typedef struct weston_touch_grab_interface weston_touch_grab_interface, *Pweston_touch_grab_interface;

struct anon_struct_24_6_de8b5042_for_buffer {
    uint32_t transform;
    int32_t scale;
    wl_fixed_t src_x;
    wl_fixed_t src_y;
    wl_fixed_t src_width;
    wl_fixed_t src_height;
};

struct weston_touch_grab {
    struct weston_touch_grab_interface *interface;
    struct weston_touch *touch;
};

struct xkb_keymap {
};

struct weston_xkb_info {
    struct xkb_keymap *keymap;
    int keymap_fd;
    size_t keymap_size;
    char *keymap_area;
    int32_t ref_count;
    xkb_mod_index_t shift_mod;
    xkb_mod_index_t caps_mod;
    xkb_mod_index_t ctrl_mod;
    xkb_mod_index_t alt_mod;
    xkb_mod_index_t mod2_mod;
    xkb_mod_index_t mod3_mod;
    xkb_mod_index_t super_mod;
    xkb_mod_index_t mod5_mod;
    xkb_led_index_t num_led;
    xkb_led_index_t caps_led;
    xkb_led_index_t scroll_led;
};

struct pixman_box32 {
    int32_t x1;
    int32_t y1;
    int32_t x2;
    int32_t y2;
};

union anon_union_4_2_5ca4fa70_for_weston_buffer_3 {
    struct wl_shm_buffer *shm_buffer;
    void *legacy_buffer;
};

struct wl_list {
    struct wl_list *prev;
    struct wl_list *next;
};

struct weston_matrix {
    float d[16];
    uint type;
};

struct weston_transform {
    struct weston_matrix matrix;
    struct wl_list link;
};

struct wl_event_source {
};

struct wl_array {
    size_t size;
    size_t alloc;
    void *data;
};

struct weston_layer_entry {
    struct wl_list link;
    struct weston_layer *layer;
};

struct linux_dmabuf_buffer {
    struct wl_resource *buffer_resource;
    struct wl_resource *params_resource;
    struct weston_compositor *compositor;
    int32_t width;
    int32_t height;
    uint32_t format;
    uint32_t flags;
    int n_planes;
    int dmabuf_fd[4];
    uint32_t offset[4];
    uint32_t stride[4];
    uint64_t modifier[4];
    void *user_data;
    dmabuf_user_data_destroy_func user_data_destroy_func;
};

struct anon_struct_8_2_6a0cb59c_for_surface {
    int32_t width;
    int32_t height;
};

struct weston_buffer_viewport {
    struct anon_struct_24_6_de8b5042_for_buffer buffer;
    struct anon_struct_8_2_6a0cb59c_for_surface surface;
    int changed;
};

struct weston_keyboard_grab {
    struct weston_keyboard_grab_interface *interface;
    struct weston_keyboard *keyboard;
};

struct wl_listener {
    struct wl_list link;
    wl_notify_func_t notify;
};

struct wl_signal {
    struct wl_list listener_list;
};

struct weston_touch {
    struct weston_seat *seat;
    struct wl_list resource_list;
    struct wl_list focus_resource_list;
    struct weston_view *focus;
    struct wl_listener focus_view_listener;
    struct wl_listener focus_resource_listener;
    uint32_t focus_serial;
    struct wl_signal focus_signal;
    uint32_t num_tp;
    struct weston_touch_grab *grab;
    struct weston_touch_grab default_grab;
    int grab_touch_id;
    wl_fixed_t grab_x;
    wl_fixed_t grab_y;
    uint32_t grab_serial;
    uint32_t grab_time;
};

struct pixman_region32 {
    pixman_box32_t extents;
    pixman_region32_data_t *data;
};

struct weston_plane {
    struct weston_compositor *compositor;
    pixman_region32_t damage;
    pixman_region32_t clip;
    int32_t x;
    int32_t y;
    struct wl_list link;
};

struct weston_layer {
    struct weston_layer_entry view_list;
    struct wl_list link;
    pixman_box32_t mask;
};

struct weston_shell_interface {
    void *shell;
    shell_surface * (*create_shell_surface)(void *, struct weston_surface *, struct weston_shell_client *);
    weston_view * (*get_primary_view)(void *, struct shell_surface *);
    void (*set_toplevel)(struct shell_surface *);
    void (*set_transient)(struct shell_surface *, struct weston_surface *, int, int, uint32_t);
    void (*set_fullscreen)(struct shell_surface *, uint32_t, uint32_t, struct weston_output *);
    void (*set_xwayland)(struct shell_surface *, int, int, uint32_t);
    int (*move)(struct shell_surface *, struct weston_pointer *);
    int (*resize)(struct shell_surface *, struct weston_pointer *, uint32_t);
    void (*set_title)(struct shell_surface *, char *);
    void (*set_window_geometry)(struct shell_surface *, int32_t, int32_t, int32_t, int32_t);
    void (*set_maximized)(struct shell_surface *);
    void (*set_pid)(struct shell_surface *, pid_t);
};

struct xkb_rule_names {
    char *rules;
    char *model;
    char *layout;
    char *variant;
    char *options;
};

struct weston_compositor {
    struct wl_signal destroy_signal;
    struct wl_display *wl_display;
    struct weston_shell_interface shell_interface;
    struct weston_config *config;
    struct wl_signal create_surface_signal;
    struct wl_signal activate_signal;
    struct wl_signal transform_signal;
    struct wl_signal kill_signal;
    struct wl_signal idle_signal;
    struct wl_signal wake_signal;
    struct wl_signal show_input_panel_signal;
    struct wl_signal hide_input_panel_signal;
    struct wl_signal update_input_panel_signal;
    struct wl_signal seat_created_signal;
    struct wl_signal output_created_signal;
    struct wl_signal output_destroyed_signal;
    struct wl_signal output_moved_signal;
    struct wl_event_loop *input_loop;
    struct wl_event_source *input_loop_source;
    struct wl_signal session_signal;
    int session_active;
    struct weston_layer fade_layer;
    struct weston_layer cursor_layer;
    struct wl_list output_list;
    struct wl_list seat_list;
    struct wl_list layer_list;
    struct wl_list view_list;
    struct wl_list plane_list;
    struct wl_list key_binding_list;
    struct wl_list modifier_binding_list;
    struct wl_list button_binding_list;
    struct wl_list touch_binding_list;
    struct wl_list axis_binding_list;
    struct wl_list debug_binding_list;
    uint32_t state;
    struct wl_event_source *idle_source;
    uint32_t idle_inhibit;
    int idle_time;
    struct weston_pointer_grab_interface *default_pointer_grab;
    struct weston_plane primary_plane;
    uint32_t capabilities;
    struct weston_renderer *renderer;
    enum pixman_format_code_t read_format;
    struct weston_backend *backend;
    struct weston_launcher *launcher;
    uint32_t output_id_pool;
    struct xkb_rule_names xkb_names;
    struct xkb_context *xkb_context;
    struct weston_xkb_info *xkb_info;
    int use_xkbcommon;
    int32_t kb_repeat_rate;
    int32_t kb_repeat_delay;
    clockid_t presentation_clock;
    int32_t repaint_msec;
    int exit_code;
    void *user_data;
    void (*exit)(struct weston_compositor *);
};

struct weston_touch_grab_interface {
    void (*down)(struct weston_touch_grab *, uint32_t, int, wl_fixed_t, wl_fixed_t);
    void (*up)(struct weston_touch_grab *, uint32_t, int);
    void (*motion)(struct weston_touch_grab *, uint32_t, int, wl_fixed_t, wl_fixed_t);
    void (*frame)(struct weston_touch_grab *);
    void (*cancel)(struct weston_touch_grab *);
};

struct weston_surface_state {
    int newly_attached;
    struct weston_buffer *buffer;
    struct wl_listener buffer_destroy_listener;
    int32_t sx;
    int32_t sy;
    pixman_region32_t damage;
    pixman_region32_t opaque;
    pixman_region32_t input;
    struct wl_list frame_callback_list;
    struct wl_list feedback_list;
    struct weston_buffer_viewport buffer_viewport;
};

struct weston_fixed_point {
    wl_fixed_t x;
    wl_fixed_t y;
};

struct shell_surface {
};

struct weston_buffer_reference {
    struct weston_buffer *buffer;
    struct wl_listener destroy_listener;
};

struct weston_timeline_object {
    uint series;
    uint id;
    uint force_refresh;
};

struct weston_surface {
    struct wl_resource *resource;
    struct wl_signal destroy_signal;
    struct weston_compositor *compositor;
    pixman_region32_t damage;
    pixman_region32_t opaque;
    pixman_region32_t input;
    int32_t width;
    int32_t height;
    int32_t ref_count;
    int32_t touched;
    void *renderer_state;
    struct wl_list views;
    struct weston_output *output;
    uint32_t output_mask;
    struct wl_list frame_callback_list;
    struct wl_list feedback_list;
    struct weston_buffer_reference buffer_ref;
    struct weston_buffer_viewport buffer_viewport;
    int32_t width_from_buffer;
    int32_t height_from_buffer;
    _Bool keep_buffer;
    struct wl_resource *viewport_resource;
    struct weston_surface_state pending;
    struct weston_matrix buffer_to_surface_matrix;
    struct weston_matrix surface_to_buffer_matrix;
    void (*configure)(struct weston_surface *, int32_t, int32_t);
    void *configure_private;
    int (*get_label)(struct weston_surface *, char *, size_t);
    struct wl_list subsurface_list;
    struct wl_list subsurface_list_pending;
    char *role_name;
    struct weston_timeline_object timeline;
};

struct weston_pointer_grab {
    struct weston_pointer_grab_interface *interface;
    struct weston_pointer *pointer;
};

struct anon_struct_8_2_fc537192_for_xkb_state {
    struct xkb_state *state;
    enum weston_led leds;
};

struct input_method {
};

struct wl_event_loop {
};

struct gbm_device {
    int fd;
    char *name;
    uint refcount;
    void (*destroy)(struct gbm_device *);
    int (*is_format_supported)(struct gbm_device *, uint32_t, uint32_t);
    gbm_bo * (*bo_create)(struct gbm_device *, uint32_t, uint32_t, uint32_t, uint32_t);
    gbm_bo * (*bo_import)(struct gbm_device *, uint32_t, void *, uint32_t);
    gbm_surface * (*surface_create)(struct gbm_device *, uint32_t, uint32_t, uint32_t, uint32_t);
};

struct anon_struct_4_1_cb8904c5_for_hdr_info {
    uint32_t hdr_supported;
};

struct gbm_surface {
    uint32_t format;
    uint32_t width;
    uint32_t height;
    uint32_t flags;
    void (*surface_release_buffer)(struct gbm_surface *, struct gbm_bo *);
    int (*surface_has_free_buffers)(struct gbm_surface *);
    void (*surface_destroy)(struct gbm_surface *);
    gbm_bo * (*surface_lock_front_buffer)(struct gbm_surface *);
};

struct anon_struct_16_4_35bc1e51_for_modifiers {
    uint32_t mods_depressed;
    uint32_t mods_latched;
    uint32_t mods_locked;
    uint32_t group;
};

struct weston_shell_client {
    void (*send_configure)(struct weston_surface *, int32_t, int32_t);
};

struct weston_animation {
    void (*frame)(struct weston_animation *, struct weston_output *, uint32_t);
    int frame_counter;
    struct wl_list link;
};

struct weston_keyboard {
    struct weston_seat *seat;
    struct wl_list resource_list;
    struct wl_list focus_resource_list;
    struct weston_surface *focus;
    struct wl_listener focus_resource_listener;
    uint32_t focus_serial;
    struct wl_signal focus_signal;
    struct weston_keyboard_grab *grab;
    struct weston_keyboard_grab default_grab;
    uint32_t grab_key;
    uint32_t grab_serial;
    uint32_t grab_time;
    struct wl_array keys;
    struct anon_struct_16_4_35bc1e51_for_modifiers modifiers;
    struct weston_keyboard_grab input_method_grab;
    struct wl_resource *input_method_resource;
    struct weston_xkb_info *xkb_info;
    struct anon_struct_8_2_fc537192_for_xkb_state xkb_state;
    struct xkb_keymap *pending_keymap;
};

struct gbm_buffer {
    struct wl_resource *buffer_resource;
    struct wl_resource *params_resource;
    struct weston_compositor *compositor;
    int32_t fd;
    int32_t metadata_fd;
    uint32_t width;
    uint32_t height;
    uint32_t format;
    uint32_t flags;
    uint32_t offset[3];
    uint32_t stride[3];
    int32_t num_planes;
    void *user_data;
    struct gbm_bo *bo;
    gbm_buffer_user_data_destroy_func user_data_destroy_func;
};

struct anon_struct_8_2_e0eab763_for_hdcp_protocol {
    uint32_t version;
    uint32_t interface_type;
};

struct weston_config {
};

struct weston_pointer_grab_interface {
    void (*focus)(struct weston_pointer_grab *);
    void (*motion)(struct weston_pointer_grab *, uint32_t, wl_fixed_t, wl_fixed_t);
    void (*button)(struct weston_pointer_grab *, uint32_t, uint32_t, uint32_t);
    void (*cancel)(struct weston_pointer_grab *);
};

struct anon_struct_72_9_ecb20bd5_for_geometry {
    float x;
    float y;
    struct wl_list transformation_list;
    struct weston_view *parent;
    struct wl_listener parent_destroy_listener;
    struct wl_list child_list;
    struct wl_list parent_link;
    _Bool scissor_enabled;
    pixman_region32_t scissor;
};

struct anon_struct_260_7_5f24e1b3_for_transform {
    int dirty;
    pixman_region32_t boundingbox;
    pixman_region32_t opaque;
    int enabled;
    struct weston_matrix matrix;
    struct weston_matrix inverse;
    struct weston_transform position;
};

struct xkb_state {
};

struct weston_seat {
    struct wl_list base_resource_list;
    struct wl_global *global;
    struct weston_pointer *pointer_state;
    struct weston_keyboard *keyboard_state;
    struct weston_touch *touch_state;
    int pointer_device_count;
    int keyboard_device_count;
    int touch_device_count;
    struct weston_output *output;
    struct wl_signal destroy_signal;
    struct wl_signal updated_caps_signal;
    struct weston_compositor *compositor;
    struct wl_list link;
    enum weston_keyboard_modifier modifier_state;
    struct weston_surface *saved_kbd_focus;
    struct wl_listener saved_kbd_focus_listener;
    struct wl_list drag_resource_list;
    uint32_t selection_serial;
    struct weston_data_source *selection_data_source;
    struct wl_listener selection_data_source_listener;
    struct wl_signal selection_signal;
    void (*led_update)(struct weston_seat *, enum weston_led);
    uint32_t slot_map;
    struct input_method *input_method;
    char *seat_name;
};

struct xkb_context {
};

union gbm_bo_handle {
    void *ptr;
    int32_t s32;
    uint32_t u32;
    int64_t s64;
    uint64_t u64;
};

struct gbm_bo {
    int ion_fd;
    int ion_metadata_fd;
    union gbm_bo_handle handle;
    union gbm_bo_handle metadata_handle;
    uint32_t format;
    uint32_t width;
    uint32_t height;
    uint32_t aligned_width;
    uint32_t aligned_height;
    uint32_t size;
    uint32_t stride;
    uint32_t usage_flags;
    uint32_t fbid;
    int (*bo_write)(struct gbm_bo *, void *, size_t);
    int (*bo_get_fd)(struct gbm_bo *);
    gbm_device * (*bo_get_device)(struct gbm_bo *);
    void (*bo_destroy)(struct gbm_bo *);
    void *user_data;
    void (*destroy_user_data)(struct gbm_bo *, void *);
};

struct weston_spring {
    double k;
    double friction;
    double current;
    double target;
    double previous;
    double min;
    double max;
    uint32_t timestamp;
    uint32_t clip;
};

struct weston_output_zoom {
    _Bool active;
    float increment;
    float level;
    float max_level;
    float trans_x;
    float trans_y;
    struct weston_seat *seat;
    struct weston_animation animation_z;
    struct weston_spring spring_z;
    struct weston_fixed_point current;
    struct wl_listener motion_listener;
};

struct weston_output {
    uint32_t id;
    char *name;
    void *renderer_state;
    struct wl_list link;
    struct wl_list resource_list;
    struct wl_global *global;
    struct weston_compositor *compositor;
    struct weston_matrix matrix;
    struct weston_matrix inverse_matrix;
    struct wl_list animation_list;
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
    int32_t mm_width;
    int32_t mm_height;
    pixman_region32_t region;
    pixman_region32_t previous_damage;
    int repaint_needed;
    int repaint_scheduled;
    struct wl_event_source *repaint_timer;
    struct weston_output_zoom zoom;
    int dirty;
    struct wl_signal frame_signal;
    struct wl_signal destroy_signal;
    int move_x;
    int move_y;
    uint32_t frame_time;
    uint64_t msc;
    int disable_planes;
    int destroying;
    struct wl_list feedback_list;
    char *make;
    char *model;
    char *serial_number;
    uint32_t subpixel;
    uint32_t transform;
    int32_t native_scale;
    int32_t current_scale;
    int32_t original_scale;
    struct weston_mode *native_mode;
    struct weston_mode *current_mode;
    struct weston_mode *original_mode;
    struct wl_list mode_list;
    void (*start_repaint_loop)(struct weston_output *);
    int (*repaint)(struct weston_output *, pixman_region32_t *);
    void (*destroy)(struct weston_output *);
    void (*assign_planes)(struct weston_output *);
    int (*switch_mode)(struct weston_output *, struct weston_mode *);
    int32_t backlight_current;
    void (*set_backlight)(struct weston_output *, uint32_t);
    void (*set_dpms)(struct weston_output *, enum dpms_enum);
    int connection_internal;
    uint16_t gamma_size;
    void (*set_gamma)(struct weston_output *, uint16_t, uint16_t *, uint16_t *, uint16_t *);
    void (*enable_ppm)(struct weston_output *, int32_t);
    void (*set_ppm)(struct weston_output *, int32_t);
    struct weston_timeline_object timeline;
    struct anon_struct_8_2_e0eab763_for_hdcp_protocol hdcp_protocol;
    struct anon_struct_4_1_cb8904c5_for_hdr_info hdr_info;
};

struct wl_resource {
};

struct weston_launcher {
};

struct wl_global {
};

struct weston_pointer {
    struct weston_seat *seat;
    struct wl_list resource_list;
    struct wl_list focus_resource_list;
    struct weston_view *focus;
    uint32_t focus_serial;
    struct wl_listener focus_view_listener;
    struct wl_listener focus_resource_listener;
    struct wl_signal focus_signal;
    struct wl_signal motion_signal;
    struct weston_view *sprite;
    struct wl_listener sprite_destroy_listener;
    int32_t hotspot_x;
    int32_t hotspot_y;
    struct weston_pointer_grab *grab;
    struct weston_pointer_grab default_grab;
    wl_fixed_t grab_x;
    wl_fixed_t grab_y;
    uint32_t grab_button;
    uint32_t grab_serial;
    uint32_t grab_time;
    wl_fixed_t x;
    wl_fixed_t y;
    wl_fixed_t sx;
    wl_fixed_t sy;
    uint32_t button_count;
    struct wl_listener output_destroy_listener;
};

struct weston_buffer {
    struct wl_resource *resource;
    struct wl_signal destroy_signal;
    struct wl_listener destroy_listener;
    union anon_union_4_2_5ca4fa70_for_weston_buffer_3 field_3;
    int32_t width;
    int32_t height;
    uint32_t busy_count;
    int y_inverted;
};

struct pixman_region32_data {
    long size;
    long numRects;
};

struct weston_renderer {
    int (*read_pixels)(struct weston_output *, enum pixman_format_code_t, void *, uint32_t, uint32_t, uint32_t, uint32_t);
    void (*repaint_output)(struct weston_output *, pixman_region32_t *);
    void (*flush_damage)(struct weston_surface *);
    void (*attach)(struct weston_surface *, struct weston_buffer *);
    void (*surface_set_color)(struct weston_surface *, float, float, float, float);
    void (*destroy)(struct weston_compositor *);
    void (*surface_get_content_size)(struct weston_surface *, int *, int *);
    int (*surface_copy_content)(struct weston_surface *, void *, size_t, int, int, int, int);
    _Bool (*import_dmabuf)(struct weston_compositor *, struct linux_dmabuf_buffer *);
    _Bool (*import_gbm_buffer)(struct weston_compositor *, struct gbm_buffer *);
};

struct wl_display {
};

struct weston_mode {
    uint32_t flags;
    int32_t width;
    int32_t height;
    uint32_t refresh;
    struct wl_list link;
};

struct weston_backend {
    void (*destroy)(struct weston_compositor *);
    void (*restore)(struct weston_compositor *);
};

struct weston_data_source {
    struct wl_resource *resource;
    struct wl_signal destroy_signal;
    struct wl_array mime_types;
    void (*accept)(struct weston_data_source *, uint32_t, char *);
    void (*send)(struct weston_data_source *, char *, int32_t);
    void (*cancel)(struct weston_data_source *);
};

struct weston_keyboard_grab_interface {
    void (*key)(struct weston_keyboard_grab *, uint32_t, uint32_t, uint32_t);
    void (*modifiers)(struct weston_keyboard_grab *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    void (*cancel)(struct weston_keyboard_grab *);
};

struct weston_view {
    struct weston_surface *surface;
    struct wl_list surface_link;
    struct wl_signal destroy_signal;
    struct wl_list link;
    struct weston_layer_entry layer_link;
    struct weston_plane *plane;
    struct weston_view *parent_view;
    pixman_region32_t clip;
    float alpha;
    void *renderer_state;
    struct anon_struct_72_9_ecb20bd5_for_geometry geometry;
    struct anon_struct_260_7_5f24e1b3_for_transform transform;
    struct weston_output *output;
    uint32_t output_mask;
    uint32_t psf_flags;
};

struct wl_shm_buffer {
};

typedef enum anon_enum_32 {
    _ISblank=1,
    _IScntrl=2,
    _ISpunct=4,
    _ISalnum=8,
    _ISupper=256,
    _ISlower=512,
    _ISalpha=1024,
    _ISdigit=2048,
    _ISxdigit=4096,
    _ISspace=8192,
    _ISprint=16384,
    _ISgraph=32768
} anon_enum_32;

typedef void *EGLSurface;

typedef void *EGLDisplay;

typedef void *EGLConfig;

typedef int32_t khronos_int32_t;

typedef khronos_int32_t EGLint;

typedef EGLSurface (*PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC)(EGLDisplay, EGLConfig, void *, EGLint *);

typedef EGLDisplay (*PFNEGLGETPLATFORMDISPLAYEXTPROC)(EGLenum, void *, EGLint *);

typedef void *EGLImageKHR;

typedef void *EGLContext;

typedef void *EGLClientBuffer;

typedef EGLImageKHR (*PFNEGLCREATEIMAGEKHRPROC)(EGLDisplay, EGLContext, EGLenum, EGLClientBuffer, EGLint *);

typedef EGLBoolean (*PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC)(EGLDisplay, EGLSurface, EGLint *, EGLint);

typedef EGLBoolean (*PFNEGLDESTROYIMAGEKHRPROC)(EGLDisplay, EGLImageKHR);

typedef struct weston_binding weston_binding, *Pweston_binding;

struct weston_binding {
};

typedef struct wl_buffer wl_buffer, *Pwl_buffer;

struct wl_buffer {
};

typedef struct polygon8 polygon8, *Ppolygon8;

struct polygon8 {
    float x[8];
    float y[8];
    int n;
};

typedef struct clip_context clip_context, *Pclip_context;

typedef struct anon_struct_8_2_947311e6_for_prev anon_struct_8_2_947311e6_for_prev, *Panon_struct_8_2_947311e6_for_prev;

typedef struct anon_struct_16_4_33b4ef90_for_clip anon_struct_16_4_33b4ef90_for_clip, *Panon_struct_16_4_33b4ef90_for_clip;

typedef struct anon_struct_8_2_947311e6_for_vertices anon_struct_8_2_947311e6_for_vertices, *Panon_struct_8_2_947311e6_for_vertices;

struct anon_struct_8_2_947311e6_for_prev {
    float x;
    float y;
};

struct anon_struct_16_4_33b4ef90_for_clip {
    float x1;
    float y1;
    float x2;
    float y2;
};

struct anon_struct_8_2_947311e6_for_vertices {
    float *x;
    float *y;
};

struct clip_context {
    struct anon_struct_8_2_947311e6_for_prev prev;
    struct anon_struct_16_4_33b4ef90_for_clip clip;
    struct anon_struct_8_2_947311e6_for_vertices vertices;
};

typedef enum path_transition {
    PATH_TRANSITION_OUT_TO_OUT=0,
    PATH_TRANSITION_OUT_TO_IN=1,
    PATH_TRANSITION_IN_TO_OUT=2,
    PATH_TRANSITION_IN_TO_IN=3
} path_transition;

typedef enum wl_shm_format {
    WL_SHM_FORMAT_ARGB8888=0,
    WL_SHM_FORMAT_XRGB8888=1,
    WL_SHM_FORMAT_C8=538982467,
    WL_SHM_FORMAT_BGRA1010102=808665410,
    WL_SHM_FORMAT_RGBA1010102=808665426,
    WL_SHM_FORMAT_ABGR2101010=808665665,
    WL_SHM_FORMAT_XBGR2101010=808665688,
    WL_SHM_FORMAT_ARGB2101010=808669761,
    WL_SHM_FORMAT_XRGB2101010=808669784,
    WL_SHM_FORMAT_BGRX1010102=808671298,
    WL_SHM_FORMAT_RGBX1010102=808671314,
    WL_SHM_FORMAT_YUV411=825316697,
    WL_SHM_FORMAT_YVU411=825316953,
    WL_SHM_FORMAT_NV21=825382478,
    WL_SHM_FORMAT_NV61=825644622,
    WL_SHM_FORMAT_BGRA4444=842088770,
    WL_SHM_FORMAT_RGBA4444=842088786,
    WL_SHM_FORMAT_ABGR4444=842089025,
    WL_SHM_FORMAT_XBGR4444=842089048,
    WL_SHM_FORMAT_ARGB4444=842093121,
    WL_SHM_FORMAT_XRGB4444=842093144,
    WL_SHM_FORMAT_YUV420=842093913,
    WL_SHM_FORMAT_NV12=842094158,
    WL_SHM_FORMAT_YVU420=842094169,
    WL_SHM_FORMAT_BGRX4444=842094658,
    WL_SHM_FORMAT_RGBX4444=842094674,
    WL_SHM_FORMAT_BGRA8888=875708738,
    WL_SHM_FORMAT_RGBA8888=875708754,
    WL_SHM_FORMAT_ABGR8888=875708993,
    WL_SHM_FORMAT_XBGR8888=875709016,
    WL_SHM_FORMAT_BGR888=875710274,
    WL_SHM_FORMAT_RGB888=875710290,
    WL_SHM_FORMAT_YUV444=875713881,
    WL_SHM_FORMAT_YVU444=875714137,
    WL_SHM_FORMAT_BGRX8888=875714626,
    WL_SHM_FORMAT_RGBX8888=875714642,
    WL_SHM_FORMAT_BGRA5551=892420418,
    WL_SHM_FORMAT_RGBA5551=892420434,
    WL_SHM_FORMAT_ABGR1555=892420673,
    WL_SHM_FORMAT_XBGR1555=892420696,
    WL_SHM_FORMAT_ARGB1555=892424769,
    WL_SHM_FORMAT_XRGB1555=892424792,
    WL_SHM_FORMAT_BGRX5551=892426306,
    WL_SHM_FORMAT_RGBX5551=892426322,
    WL_SHM_FORMAT_BGR565=909199170,
    WL_SHM_FORMAT_RGB565=909199186,
    WL_SHM_FORMAT_YUV422=909202777,
    WL_SHM_FORMAT_NV16=909203022,
    WL_SHM_FORMAT_YVU422=909203033,
    WL_SHM_FORMAT_RGB332=943867730,
    WL_SHM_FORMAT_BGR233=944916290,
    WL_SHM_FORMAT_YVU410=961893977,
    WL_SHM_FORMAT_YUV410=961959257,
    WL_SHM_FORMAT_YVYU=1431918169,
    WL_SHM_FORMAT_AYUV=1448433985,
    WL_SHM_FORMAT_YUYV=1448695129,
    WL_SHM_FORMAT_VYUY=1498765654,
    WL_SHM_FORMAT_UYVY=1498831189
} wl_shm_format;

typedef enum gbm_bo_flags {
    GBM_BO_USE_SCANOUT=1,
    GBM_BO_USE_CURSOR=2,
    GBM_BO_USE_CURSOR_64X64=2,
    GBM_BO_USE_RENDERING=4,
    GBM_BO_USE_WRITE=8
} gbm_bo_flags;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef EGLBoolean (*PFNEGLUNBINDWAYLANDDISPLAYWL)(EGLDisplay, struct wl_display *);

typedef EGLBoolean (*PFNEGLBINDWAYLANDDISPLAYWL)(EGLDisplay, struct wl_display *);

typedef EGLBoolean (*PFNEGLQUERYWAYLANDBUFFERWL)(EGLDisplay, struct wl_resource *, EGLint, EGLint *);

typedef struct _IO_FILE FILE;

typedef void *GLeglImageOES;

typedef void (*PFNGLEGLIMAGETARGETTEXTURE2DOESPROC)(GLenum, GLeglImageOES);

typedef enum weston_capability {
    WESTON_CAP_ROTATION_ANY=1,
    WESTON_CAP_CAPTURE_YFLIP=2,
    WESTON_CAP_CURSOR_PLANE=4,
    WESTON_CAP_ARBITRARY_MODES=8,
    WESTON_CAP_VIEW_CLIP_MASK=16
} weston_capability;

typedef struct color_correction_values color_correction_values, *Pcolor_correction_values;

struct color_correction_values {
    uint16_t gamma;
    uint16_t ccm[9];
    uint16_t rgb_color_gains[3];
};

typedef struct timezone timezone, *Ptimezone;

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

typedef struct gl_border_image gl_border_image, *Pgl_border_image;

struct gl_border_image {
    GLuint tex;
    int32_t width;
    int32_t height;
    int32_t tex_width;
    void *data;
};

typedef struct gl_renderer gl_renderer, *Pgl_renderer;

typedef struct gl_shader gl_shader, *Pgl_shader;

struct gl_shader {
    GLuint program;
    GLuint vertex_shader;
    GLuint fragment_shader;
    GLint proj_uniform;
    GLint tex_uniforms[3];
    GLint alpha_uniform;
    GLint color_uniform;
    char *vertex_source;
    char *fragment_source;
};

struct gl_renderer {
    struct weston_renderer base;
    int fragment_shader_debug;
    int fan_debug;
    struct weston_binding *fragment_binding;
    struct weston_binding *fan_binding;
    EGLDisplay egl_display;
    EGLContext egl_context;
    EGLConfig egl_config;
    struct gbm_device *gbm_hdle;
    struct wl_array vertices;
    struct wl_array vtxcnt;
    PFNGLEGLIMAGETARGETTEXTURE2DOESPROC image_target_texture_2d;
    PFNEGLCREATEIMAGEKHRPROC create_image;
    PFNEGLDESTROYIMAGEKHRPROC destroy_image;
    PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC swap_buffers_with_damage;
    PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC create_platform_window;
    int has_unpack_subimage;
    PFNEGLBINDWAYLANDDISPLAYWL bind_display;
    PFNEGLUNBINDWAYLANDDISPLAYWL unbind_display;
    PFNEGLQUERYWAYLANDBUFFERWL query_buffer;
    int has_bind_display;
    int has_egl_image_external;
    int has_egl_buffer_age;
    int has_configless_context;
    int has_dmabuf_import;
    struct wl_list dmabuf_images;
    struct wl_list gbmbuf_images;
    struct gl_shader texture_shader_rgba;
    struct gl_shader texture_shader_rgbx;
    struct gl_shader texture_shader_egl_external;
    struct gl_shader texture_shader_y_uv;
    struct gl_shader texture_shader_y_u_v;
    struct gl_shader texture_shader_y_xuxv;
    struct gl_shader invert_color_shader;
    struct gl_shader solid_shader;
    struct gl_shader *current_shader;
    struct wl_signal destroy_signal;
};

typedef enum buffer_type {
    BUFFER_TYPE_NULL=0,
    BUFFER_TYPE_SOLID=1,
    BUFFER_TYPE_SHM=2,
    BUFFER_TYPE_EGL=3
} buffer_type;

typedef struct egl_image egl_image, *Pegl_image;

struct egl_image {
    struct gl_renderer *renderer;
    EGLImageKHR image;
    int refcount;
    struct linux_dmabuf_buffer *dmabuf;
    struct gbm_buffer *gbmbuf;
    struct wl_list link;
};

typedef struct gl_output_state gl_output_state, *Pgl_output_state;

typedef enum gl_border_status {
    BORDER_STATUS_CLEAN=0,
    BORDER_TOP_DIRTY=1,
    BORDER_LEFT_DIRTY=2,
    BORDER_RIGHT_DIRTY=4,
    BORDER_BOTTOM_DIRTY=8,
    BORDER_ALL_DIRTY=15,
    BORDER_SIZE_CHANGED=16
} gl_border_status;

struct gl_output_state {
    EGLSurface egl_surface;
    pixman_region32_t buffer_damage[2];
    int buffer_damage_index;
    enum gl_border_status border_damage[2];
    struct gl_border_image borders[4];
    enum gl_border_status border_status;
    struct weston_matrix output_matrix;
};

typedef struct gl_surface_state gl_surface_state, *Pgl_surface_state;

typedef khronos_float_t GLfloat;

struct gl_surface_state {
    GLfloat color[4];
    struct gl_shader *shader;
    GLuint textures[3];
    int num_textures;
    int needs_full_upload;
    pixman_region32_t texture_damage;
    GLenum gl_format;
    GLenum gl_pixel_type;
    struct egl_image *images[3];
    GLenum target;
    int num_images;
    struct weston_buffer_reference buffer_ref;
    enum buffer_type buffer_type;
    int pitch;
    int height;
    int y_inverted;
    struct weston_surface *surface;
    struct wl_listener surface_destroy_listener;
    struct wl_listener renderer_destroy_listener;
};

typedef struct generic_buf_layout generic_buf_layout, *Pgeneric_buf_layout;

typedef struct generic_buf_layout generic_buf_layout_t;

typedef struct generic_plane generic_plane, *Pgeneric_plane;

typedef struct generic_plane generic_plane_t;

struct generic_plane {
    uint32_t *top_left;
    uint32_t offset;
    int32_t component_id;
    uint32_t aligned_width;
    uint32_t aligned_height;
    uint32_t size;
    int32_t bits_per_component;
    int32_t bits_used;
    int32_t h_increment;
    int32_t v_increment;
    int32_t h_subsampling;
    int32_t v_subsampling;
};

struct generic_buf_layout {
    int pixel_format;
    uint32_t num_planes;
    generic_plane_t planes[5];
};

typedef struct gbm_buf_info gbm_buf_info, *Pgbm_buf_info;

struct gbm_buf_info {
    int fd;
    int metadata_fd;
    uint32_t width;
    uint32_t height;
    uint32_t format;
};

typedef enum zlinux_buffer_params_flags {
    ZLINUX_BUFFER_PARAMS_FLAGS_Y_INVERT=1,
    ZLINUX_BUFFER_PARAMS_FLAGS_INTERLACED=2,
    ZLINUX_BUFFER_PARAMS_FLAGS_BOTTOM_FIRST=4
} zlinux_buffer_params_flags;

typedef struct gl_renderer_interface gl_renderer_interface, *Pgl_renderer_interface;

typedef enum gl_renderer_border_side {
    GL_RENDERER_BORDER_TOP=0,
    GL_RENDERER_BORDER_LEFT=1,
    GL_RENDERER_BORDER_RIGHT=2,
    GL_RENDERER_BORDER_BOTTOM=3
} gl_renderer_border_side;

struct gl_renderer_interface {
    EGLint *opaque_attribs;
    EGLint *alpha_attribs;
    int (*create)(struct weston_compositor *, EGLenum, void *, EGLint *, EGLint *, int);
    EGLDisplay (*display)(struct weston_compositor *);
    int (*output_create)(struct weston_output *, void *, void *, EGLint *, EGLint *, int);
    void (*output_destroy)(struct weston_output *);
    EGLSurface (*output_surface)(struct weston_output *);
    void (*output_set_border)(struct weston_output *, enum gl_renderer_border_side, int32_t, int32_t, int32_t, uchar *);
    void (*print_egl_error_state)(void);
};


// WARNING! conflicting data type names: /stdio.h/FILE - /DWARF/stdio.h/FILE

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_ARM {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_OVERLAYSECTION=1879048197
} Elf_SectionHeaderType_ARM;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_ARM_EXIDX=1879048192
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag_ARM {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf32_DynTag_ARM;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



void eglTerminate(void)

{
  eglTerminate();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



void glActiveTexture(void)

{
  glActiveTexture();
  return;
}



void wl_shm_buffer_get_height(void)

{
  wl_shm_buffer_get_height();
  return;
}



void glGetProgramInfoLog(void)

{
  glGetProgramInfoLog();
  return;
}



void glBlendFunc(void)

{
  glBlendFunc();
  return;
}



void eglQueryString(void)

{
  eglQueryString();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void glDrawArrays(void)

{
  glDrawArrays();
  return;
}



void weston_output_damage(void)

{
  weston_output_damage();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void eglGetConfigs(void)

{
  eglGetConfigs();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void gbm_buffer_get(void)

{
  gbm_buffer_get();
  return;
}



void glGenFramebuffers(void)

{
  glGenFramebuffers();
  return;
}



void pixman_region32_fini(void)

{
  pixman_region32_fini();
  return;
}



void weston_matrix_init(void)

{
  weston_matrix_init();
  return;
}



void glUniform1f(void)

{
  glUniform1f();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchrnul(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchrnul(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void pixman_region32_subtract(void)

{
  pixman_region32_subtract();
  return;
}



void eglGetError(void)

{
  eglGetError();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void weston_transformed_region(void)

{
  weston_transformed_region();
  return;
}



void wl_shm_buffer_get(void)

{
  wl_shm_buffer_get();
  return;
}



void glUniformMatrix4fv(void)

{
  glUniformMatrix4fv();
  return;
}



void eglReleaseThread(void)

{
  eglReleaseThread();
  return;
}



void pixman_region32_not_empty(void)

{
  pixman_region32_not_empty();
  return;
}



void pixman_region32_init(void)

{
  pixman_region32_init();
  return;
}



void eglGetProcAddress(void)

{
  eglGetProcAddress();
  return;
}



void weston_log(void)

{
  weston_log();
  return;
}



void gbm_bo_import(void)

{
  gbm_bo_import();
  return;
}



void gbm_buffer_backend_set_user_data(void)

{
  gbm_buffer_backend_set_user_data();
  return;
}



void glTexParameteri(void)

{
  glTexParameteri();
  return;
}



void glGetShaderiv(void)

{
  glGetShaderiv();
  return;
}



void wl_shm_buffer_get_stride(void)

{
  wl_shm_buffer_get_stride();
  return;
}



void glDisableVertexAttribArray(void)

{
  glDisableVertexAttribArray();
  return;
}



void glBindFramebuffer(void)

{
  glBindFramebuffer();
  return;
}



void eglBindAPI(void)

{
  eglBindAPI();
  return;
}



void glTexImage2D(void)

{
  glTexImage2D();
  return;
}



void pixman_region32_copy(void)

{
  pixman_region32_copy();
  return;
}



void glEnable(void)

{
  glEnable();
  return;
}



void wl_display_add_shm_format(void)

{
  wl_display_add_shm_format();
  return;
}



void glUseProgram(void)

{
  glUseProgram();
  return;
}



void pixman_region32_intersect(void)

{
  pixman_region32_intersect();
  return;
}



void wl_shm_buffer_get_width(void)

{
  wl_shm_buffer_get_width();
  return;
}



void pixman_region32_rectangles(void)

{
  pixman_region32_rectangles();
  return;
}



void eglCreateWindowSurface(void)

{
  eglCreateWindowSurface();
  return;
}



void glPixelStorei(void)

{
  glPixelStorei();
  return;
}



void glFramebufferTexture2D(void)

{
  glFramebufferTexture2D();
  return;
}



void glShaderSource(void)

{
  glShaderSource();
  return;
}



void gbm_perform(void)

{
  gbm_perform();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



void wl_list_init(void)

{
  wl_list_init();
  return;
}



void glCreateProgram(void)

{
  glCreateProgram();
  return;
}



void glGetProgramiv(void)

{
  glGetProgramiv();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



void glGetUniformLocation(void)

{
  glGetUniformLocation();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void glVertexAttribPointer(void)

{
  glVertexAttribPointer();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void glDeleteShader(void)

{
  glDeleteShader();
  return;
}



void weston_buffer_reference(void)

{
  weston_buffer_reference();
  return;
}



void glUniform4fv(void)

{
  glUniform4fv();
  return;
}



void linux_dmabuf_buffer_get(void)

{
  linux_dmabuf_buffer_get();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = __ctype_b_loc();
  return ppuVar1;
}



void eglChooseConfig(void)

{
  eglChooseConfig();
  return;
}



void linux_dmabuf_buffer_get_user_data(void)

{
  linux_dmabuf_buffer_get_user_data();
  return;
}



void glCompileShader(void)

{
  glCompileShader();
  return;
}



void wl_list_remove(void)

{
  wl_list_remove();
  return;
}



void linux_dmabuf_buffer_set_user_data(void)

{
  linux_dmabuf_buffer_set_user_data();
  return;
}



void glReadPixels(void)

{
  glReadPixels();
  return;
}



void linux_dmabuf_buffer_send_server_error(void)

{
  linux_dmabuf_buffer_send_server_error();
  return;
}



void weston_log_continue(void)

{
  weston_log_continue();
  return;
}



void wl_shm_buffer_get_format(void)

{
  wl_shm_buffer_get_format();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



void glGetString(void)

{
  glGetString();
  return;
}



void wl_array_add(void)

{
  wl_array_add();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void eglInitialize(void)

{
  eglInitialize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



void glUniform1i(void)

{
  glUniform1i();
  return;
}



void wl_array_release(void)

{
  wl_array_release();
  return;
}



void eglMakeCurrent(void)

{
  eglMakeCurrent();
  return;
}



void eglSwapBuffers(void)

{
  eglSwapBuffers();
  return;
}



void pixman_region32_translate(void)

{
  pixman_region32_translate();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void pixman_region32_union_rect(void)

{
  pixman_region32_union_rect();
  return;
}



void glBindAttribLocation(void)

{
  glBindAttribLocation();
  return;
}



void weston_surface_to_buffer_float(void)

{
  weston_surface_to_buffer_float();
  return;
}



void glEnableVertexAttribArray(void)

{
  glEnableVertexAttribArray();
  return;
}



void eglGetDisplay(void)

{
  eglGetDisplay();
  return;
}



void weston_view_from_global_float(void)

{
  weston_view_from_global_float();
  return;
}



void gbm_buffer_send_server_error(void)

{
  gbm_buffer_send_server_error();
  return;
}



void wl_shm_buffer_begin_access(void)

{
  wl_shm_buffer_begin_access();
  return;
}



void pixman_region32_init_rect(void)

{
  pixman_region32_init_rect();
  return;
}



void weston_compositor_add_debug_binding(void)

{
  weston_compositor_add_debug_binding();
  return;
}



void glTexSubImage2D(void)

{
  glTexSubImage2D();
  return;
}



void glGenTextures(void)

{
  glGenTextures();
  return;
}



void eglQuerySurface(void)

{
  eglQuerySurface();
  return;
}



void weston_matrix_translate(void)

{
  weston_matrix_translate();
  return;
}



void glAttachShader(void)

{
  glAttachShader();
  return;
}



void eglDestroySurface(void)

{
  eglDestroySurface();
  return;
}



void glDeleteTextures(void)

{
  glDeleteTextures();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



void pixman_region32_union(void)

{
  pixman_region32_union();
  return;
}



void glBindTexture(void)

{
  glBindTexture();
  return;
}



void gbm_buffer_backend_get_user_data(void)

{
  gbm_buffer_backend_get_user_data();
  return;
}



void eglGetConfigAttrib(void)

{
  eglGetConfigAttrib();
  return;
}



void glLinkProgram(void)

{
  glLinkProgram();
  return;
}



void wl_shm_buffer_get_data(void)

{
  wl_shm_buffer_get_data();
  return;
}



void weston_surface_to_buffer_rect(void)

{
  weston_surface_to_buffer_rect();
  return;
}



void glCreateShader(void)

{
  glCreateShader();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

float roundf(float __x)

{
  float fVar1;
  
  fVar1 = roundf(__x);
  return fVar1;
}



void glDisable(void)

{
  glDisable();
  return;
}



void glGetShaderInfoLog(void)

{
  glGetShaderInfoLog();
  return;
}



void weston_view_to_global_float(void)

{
  weston_view_to_global_float();
  return;
}



void wl_list_insert(void)

{
  wl_list_insert();
  return;
}



void glCheckFramebufferStatus(void)

{
  glCheckFramebufferStatus();
  return;
}



void weston_binding_destroy(void)

{
  weston_binding_destroy();
  return;
}



void glDeleteFramebuffers(void)

{
  glDeleteFramebuffers();
  return;
}



void glViewport(void)

{
  glViewport();
  return;
}



void weston_matrix_scale(void)

{
  weston_matrix_scale();
  return;
}



void wl_shm_buffer_end_access(void)

{
  wl_shm_buffer_end_access();
  return;
}



void glDeleteProgram(void)

{
  glDeleteProgram();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



void glDrawElements(void)

{
  glDrawElements();
  return;
}



void eglCreateContext(void)

{
  eglCreateContext();
  return;
}



// WARNING: Removing unreachable block (ram,0x00012104)

void processEntry call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x0001213c)
// WARNING: Removing unreachable block (ram,0x00012148)
// WARNING: Removing unreachable block (ram,0x0001214c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001218c)
// WARNING: Removing unreachable block (ram,0x00012198)
// WARNING: Removing unreachable block (ram,0x0001219c)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_10375 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_10375 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  if (__JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



float decode_float16(uint16_t value)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint32_t sign;
  uint uVar4;
  int iVar5;
  
  uVar4 = ((uint)value << 0x11) >> 0x1b;
  uVar1 = (uint)(value >> 0xf);
  uVar2 = value & 0x3ff;
  if (uVar4 != 0) {
    if (uVar4 == 0x1f) {
      fVar3 = (float)(uVar2 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar3 = (float)(uVar2 << 0xd | uVar1 << 0x1f | (uVar4 + 0x70) * 0x800000);
    }
    return fVar3;
  }
  if ((value & 0x3ff) == 0) {
    fVar3 = (float)(uVar1 << 0x1f);
  }
  else {
    iVar5 = 0x71;
    do {
      uVar2 = uVar2 << 1;
      iVar5 = iVar5 + -1;
    } while ((uVar2 & 0x400) == 0);
    fVar3 = (float)(iVar5 * 0x800000 | uVar1 << 0x1f | (uVar2 & 0x3ff) << 0xd);
  }
  return fVar3;
}



// WARNING: Unknown calling convention

color_correction_values * read_correction_values(void)

{
  char *pcVar1;
  color_correction_values *__ptr;
  FILE *__stream;
  size_t sVar2;
  char *extraout_r1;
  char *extraout_r1_00;
  char **ppcVar3;
  char *cal_paths [4];
  char *pcStack_28;
  char **ppcVar4;
  
  weston_log("Setting up color correction\n");
  pcVar1 = getenv("DISABLE_COLOR_CORRECTION");
  if (pcVar1 == (char *)0x0) {
    __ptr = (color_correction_values *)malloc(0x1a);
    if (__ptr != (color_correction_values *)0x0) {
      cal_paths[0] = getenv("COLOR_CORRECTION_PATH");
      cal_paths[1] = "/data/misc/display/color_cal/color_cal";
      cal_paths[2] = "/sys/devices/platform/soc/894000.i2c/i2c-2/2-0017/color_cal";
      cal_paths[3] = "/persist/comma/color_cal";
      __stream = (FILE *)0x0;
      ppcVar3 = cal_paths;
      do {
        ppcVar4 = ppcVar3 + 1;
        pcVar1 = *ppcVar3;
        if (pcVar1 != (char *)0x0) {
          weston_log("Color calibration trying %s\n",pcVar1);
          __stream = fopen(pcVar1,"r");
          if (__stream == (FILE *)0x0) {
            weston_log("- unable to open %s\n",pcVar1);
            pcVar1 = extraout_r1_00;
          }
          else {
            sVar2 = fread(__ptr,0x1a,1,__stream);
            fclose(__stream);
            if (sVar2 == 1) {
              return __ptr;
            }
            weston_log("- file too short!\n");
            pcVar1 = extraout_r1;
          }
        }
        ppcVar3 = ppcVar4;
      } while (ppcVar4 != &pcStack_28);
      weston_log("No color calibraion files found!\n",pcVar1);
      if (__stream != (FILE *)0x0) {
        fclose(__stream);
      }
      free(__ptr);
      return (color_correction_values *)0x0;
    }
    weston_log("CCV allocation failed...\n");
  }
  else {
    weston_log("Color correction disabled by flag\n");
  }
  return (color_correction_values *)0x0;
}



// WARNING: Unknown calling convention

char * color_correction_get_shader(void)

{
  uint uVar1;
  ushort uVar2;
  char *__s;
  color_correction_values *__ptr;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  double dVar19;
  
  __s = (char *)malloc(0x400);
  if (__s == (char *)0x0) {
    weston_log("Malloc failed\n");
    weston_log("Failed to setup color correction\n");
    return "";
  }
  __ptr = read_correction_values();
  if (__ptr == (color_correction_values *)0x0) {
    weston_log("No color correction values found\n");
    weston_log("Failed to setup color correction\n");
  }
  else {
    uVar2 = __ptr->rgb_color_gains[0];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar5 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar5 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar5 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->rgb_color_gains[1];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar4 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar4 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar4 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar4 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->rgb_color_gains[2];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar6 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar6 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar6 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar6 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[0];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar8 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar8 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar8 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar8 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[1];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar9 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar9 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar9 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar9 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[2];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar10 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar10 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar10 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar10 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[3];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar11 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar11 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar11 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar11 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[4];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar12 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar12 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar12 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar12 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[5];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar13 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar13 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar13 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar13 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[6];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar14 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar14 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar14 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar14 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[7];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar15 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar15 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar15 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar15 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->ccm[8];
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar16 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar16 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar16 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar16 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    uVar2 = __ptr->gamma;
    uVar3 = ((uint)uVar2 << 0x11) >> 0x1b;
    uVar7 = uVar2 & 0x3ff;
    uVar1 = (uint)(uVar2 >> 0xf);
    if (uVar3 == 0) {
      if ((uVar2 & 0x3ff) == 0) {
        fVar17 = (float)(uVar1 << 0x1f);
      }
      else {
        iVar18 = 0x71;
        do {
          uVar7 = uVar7 << 1;
          iVar18 = iVar18 + -1;
        } while ((uVar7 & 0x400) == 0);
        fVar17 = (float)(iVar18 * 0x800000 | uVar1 << 0x1f | (uVar7 & 0x3ff) << 0xd);
      }
    }
    else if (uVar3 == 0x1f) {
      fVar17 = (float)(uVar7 << 0xd | uVar1 << 0x1f | 0x7f800000);
    }
    else {
      fVar17 = (float)(uVar7 << 0xd | uVar1 << 0x1f | (uVar3 + 0x70) * 0x800000);
    }
    dVar19 = 1.0 / (double)fVar17;
    iVar18 = sprintf(__s,
                     "  \tgl_FragColor.rgb = pow(gl_FragColor.rgb, vec3(2.2, 2.2, 2.2));\n   gl_FragColor.r *= %ff;\n   gl_FragColor.g *= %ff;\n   gl_FragColor.b *= %ff;\n\t\tvec3 rgb_cc = vec3(0.0f, 0.0f, 0.0f);\n  \trgb_cc += gl_FragColor.r * vec3(%ff, %ff, %ff);\n  \trgb_cc += gl_FragColor.g * vec3(%ff, %ff, %ff);\n  \trgb_cc += gl_FragColor.b * vec3(%ff, %ff, %ff);\n  \tgl_FragColor.rgb = rgb_cc;\n  \tgl_FragColor.rgb = pow(gl_FragColor.rgb, vec3(%ff/2.2, %ff/2.2, %ff/2.2));\n"
                     ,SUB84(1.0 / (double)fVar5,0),(int)((ulonglong)(1.0 / (double)fVar5) >> 0x20),
                     1.0 / (double)fVar4,1.0 / (double)fVar6,(double)fVar8,(double)fVar9,
                     (double)fVar10,(double)fVar11,(double)fVar12,(double)fVar13,(double)fVar14,
                     (double)fVar15,(double)fVar16,dVar19,dVar19,dVar19);
    if (-1 < iVar18) {
      weston_log("Successfully setup color correction\n");
      free(__ptr);
      return __s;
    }
    weston_log("Color correction sprintf failed\n");
    weston_log("Failed to setup color correction\n");
    free(__ptr);
  }
  free(__s);
  return "";
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_output_set_border
               (weston_output *output,gl_renderer_border_side side,int32_t width,int32_t height,
               int32_t tex_width,uchar *data)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = output->renderer_state;
  if ((*(int *)((int)pvVar1 + side * 0x14 + 0x3c) == width) &&
     (*(int *)((int)pvVar1 + side * 0x14 + 0x40) == height)) {
    uVar2 = *(uint *)((int)pvVar1 + 0x88);
  }
  else {
    uVar2 = *(uint *)((int)pvVar1 + 0x88) | 0x1f;
  }
  if (data == (uchar *)0x0) {
    height = 0;
  }
  *(int32_t *)((int)pvVar1 + side * 0x14 + 0x40) = height;
  if (data == (uchar *)0x0) {
    width = 0;
  }
  *(int32_t *)((int)pvVar1 + side * 0x14 + 0x44) = tex_width;
  *(uchar **)((int)pvVar1 + side * 0x14 + 0x48) = data;
  *(int32_t *)((int)pvVar1 + side * 0x14 + 0x3c) = width;
  *(uint *)((int)pvVar1 + 0x88) = uVar2 | 1 << (side & 0xff);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

EGLSurface gl_renderer_output_surface(weston_output *output)

{
                    // WARNING: Load size is inaccurate
  return *output->renderer_state;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

EGLDisplay gl_renderer_display(weston_compositor *ec)

{
  return ec->renderer[1].surface_set_color;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void gl_renderer_print_egl_error_state(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = eglGetError();
  switch(uVar1) {
  case 0x3000:
    pcVar2 = "EGL_SUCCESS";
    break;
  case 0x3001:
    pcVar2 = "EGL_NOT_INITIALIZED";
    break;
  case 0x3002:
    pcVar2 = "EGL_BAD_ACCESS";
    break;
  case 0x3003:
    pcVar2 = "EGL_BAD_ALLOC";
    break;
  case 0x3004:
    pcVar2 = "EGL_BAD_ATTRIBUTE";
    break;
  case 0x3005:
    pcVar2 = "EGL_BAD_CONFIG";
    break;
  case 0x3006:
    pcVar2 = "EGL_BAD_CONTEXT";
    break;
  case 0x3007:
    pcVar2 = "EGL_BAD_CURRENT_SURFACE";
    break;
  case 0x3008:
    pcVar2 = "EGL_BAD_DISPLAY";
    break;
  case 0x3009:
    pcVar2 = "EGL_BAD_MATCH";
    break;
  case 0x300a:
    pcVar2 = "EGL_BAD_NATIVE_PIXMAP";
    break;
  case 0x300b:
    pcVar2 = "EGL_BAD_NATIVE_WINDOW";
    break;
  case 0x300c:
    pcVar2 = "EGL_BAD_PARAMETER";
    break;
  case 0x300d:
    pcVar2 = "EGL_BAD_SURFACE";
    break;
  case 0x300e:
    pcVar2 = "EGL_CONTEXT_LOST";
    break;
  default:
    pcVar2 = "unknown";
  }
  weston_log("EGL error state: %s (0x%04lx)\n",pcVar2,uVar1);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_output_destroy(weston_output *output)

{
  undefined4 *__ptr;
  weston_renderer *pwVar1;
  
  __ptr = (undefined4 *)output->renderer_state;
  pwVar1 = output->compositor->renderer;
  pixman_region32_fini(__ptr + 1);
  pixman_region32_fini(__ptr + 6);
  eglDestroySurface(pwVar1[1].surface_set_color,*__ptr);
  free(__ptr);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void fan_debug_repaint_binding(weston_keyboard *keyboard,uint32_t time,uint32_t key,void *data)

{
  weston_compositor *compositor;
  
  *(uint *)(*(int *)((int)data + 0x1b4) + 0x2c) =
       (uint)(*(int *)(*(int *)((int)data + 0x1b4) + 0x2c) == 0);
  weston_compositor_damage_all(data);
  return;
}



void log_extensions(char *name,char *extensions)

{
  int iVar1;
  byte *pbVar2;
  ushort **ppuVar3;
  int iVar4;
  
  iVar1 = weston_log(&DAT_0001a5e0,name);
  if (*extensions != '\0') {
    do {
      pbVar2 = (byte *)strchrnul(extensions,0x20);
      iVar4 = (int)pbVar2 - (int)extensions;
      if (iVar1 + iVar4 < 0x4f) {
        iVar4 = weston_log_continue(" %.*s",iVar4,extensions);
        iVar1 = iVar1 + iVar4;
      }
      else {
        iVar1 = weston_log_continue("\n               %.*s",iVar4,extensions);
      }
      ppuVar3 = __ctype_b_loc();
      do {
        extensions = (char *)pbVar2;
        pbVar2 = (byte *)extensions + 1;
      } while (((*ppuVar3)[(byte)*extensions] & 0x2000) != 0);
    } while ((byte)*extensions != 0);
  }
  weston_log_continue("\n");
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int egl_image_unref(egl_image *image)

{
  int iVar1;
  gl_renderer *gr;
  gl_renderer *pgVar2;
  
  pgVar2 = image->renderer;
  if (image->refcount < 1) {
                    // WARNING: Subroutine does not return
    __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
  }
  iVar1 = image->refcount + -1;
  image->refcount = iVar1;
  if (iVar1 != 0) {
    return iVar1;
  }
  if (image->dmabuf != (linux_dmabuf_buffer *)0x0) {
    linux_dmabuf_buffer_set_user_data(image->dmabuf,0,0);
  }
  if (image->gbmbuf != (gbm_buffer *)0x0) {
    gbm_buffer_backend_set_user_data(image->gbmbuf,0);
  }
  (*pgVar2->destroy_image)(pgVar2->egl_display,image->image);
  wl_list_remove(&image->link);
  free(image);
  return 0;
}



void draw_output_border_texture
               (gl_output_state *go,gl_renderer_border_side side,int32_t x,int32_t y,int32_t width,
               int32_t height)

{
  GLfloat texcoord [8];
  GLfloat verts [8];
  
  if (go->borders[side].data == (void *)0x0) {
    if (go->borders[side].tex != 0) {
      glDeleteTextures(1,go->borders + side);
      go->borders[side].tex = 0;
    }
  }
  else {
    if (go->borders[side].tex == 0) {
      glGenTextures(1,go->borders + side);
      glBindTexture(0xde1,go->borders[side].tex);
      glTexParameteri(0xde1,0x2802,0x812f);
      glTexParameteri(0xde1,0x2803,0x812f);
      glTexParameteri(0xde1,0x2801,0x2600);
      glTexParameteri(0xde1,0x2800,0x2600);
    }
    else {
      glBindTexture(0xde1);
    }
    if ((go->border_status & 1 << (side & 0xff)) != BORDER_STATUS_CLEAN) {
      glPixelStorei(0xcf2,0);
      glPixelStorei(0xcf4,0);
      glPixelStorei(0xcf3,0);
      glTexImage2D(0xde1,0,0x80e1,go->borders[side].tex_width,go->borders[side].height,0,0x80e1,
                   0x1401,go->borders[side].data);
    }
    texcoord[0] = 0.0;
    texcoord[1] = 0.0;
    texcoord[3] = 0.0;
    texcoord[6] = 0.0;
    texcoord[5] = 1.0;
    texcoord[7] = 1.0;
    texcoord[2] = (float)(longlong)go->borders[side].width /
                  (float)(longlong)go->borders[side].tex_width;
    verts[2] = (GLfloat)(longlong)(x + width);
    verts[5] = (GLfloat)(longlong)(y + height);
    verts[0] = (GLfloat)(longlong)x;
    verts[1] = (GLfloat)(longlong)y;
    texcoord[4] = texcoord[2];
    verts[3] = verts[1];
    verts[4] = verts[2];
    verts[6] = verts[0];
    verts[7] = verts[5];
    glVertexAttribPointer(0,2,0x1406,0,0,verts);
    glVertexAttribPointer(1,2,0x1406,0,0,texcoord);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glDrawElements(4,6,0x1403,draw_output_border_texture::indices);
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(0);
  }
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int egl_choose_config(gl_renderer *gr,EGLint *attribs,EGLint *visual_id,int n_ids,
                     EGLConfig *config_out)

{
  EGLint EVar1;
  int iVar2;
  undefined4 *__ptr;
  int iVar3;
  undefined4 *puVar4;
  _func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
  *p_Var5;
  int iVar6;
  EGLint *pEVar7;
  bool bVar8;
  EGLint count;
  EGLint matched;
  EGLint id;
  
  count = 0;
  matched = 0;
  iVar2 = eglGetConfigs((gr->base).read_pixels,0,0,&count);
  if ((iVar2 == 0) || (count < 1)) {
    weston_log("No EGL configs to choose from.\n");
    return -1;
  }
  __ptr = (undefined4 *)calloc(count,4);
  if (__ptr != (undefined4 *)0x0) {
    iVar2 = eglChooseConfig((gr->base).read_pixels,attribs,__ptr,count,&matched);
    if ((iVar2 == 0) || (matched == 0)) {
      weston_log("No EGL configs with appropriate attributes.\n");
    }
    else {
      if (visual_id == (EGLint *)0x0) {
        *config_out = (EGLConfig)*__ptr;
        free(__ptr);
        return 0;
      }
      if (0 < n_ids) {
        pEVar7 = visual_id + -1;
        iVar2 = 0;
        do {
          iVar6 = iVar2;
          EVar1 = matched;
          pEVar7 = pEVar7 + 1;
          iVar2 = *pEVar7;
          if (0 < matched) {
            attribs = (EGLint *)0x0;
          }
          p_Var5 = (gr->base).read_pixels;
          if (0 < matched) {
            puVar4 = __ptr + -1;
            do {
              puVar4 = puVar4 + 1;
              iVar3 = eglGetConfigAttrib(p_Var5,*puVar4,0x302e,&id);
              if ((iVar3 != 0) && (iVar2 == id)) {
                bVar8 = attribs == (EGLint *)0xffffffff;
                goto LAB_00013300;
              }
              attribs = (EGLint *)((int)attribs + 1);
            } while ((EGLint *)EVar1 != attribs);
          }
          bVar8 = true;
          attribs = (EGLint *)0xffffffff;
LAB_00013300:
          iVar2 = iVar6 + 1;
          if (n_ids <= iVar2) {
            bVar8 = false;
          }
        } while (bVar8);
        if (attribs != (EGLint *)0xffffffff) {
          *config_out = (EGLConfig)__ptr[(int)attribs];
          free(__ptr);
          if (iVar2 == 1) {
            return 0;
          }
          weston_log("Unable to use first choice EGL config with id 0x%x, succeeded with alternate id 0x%x.\n"
                     ,*visual_id,visual_id[iVar6]);
          return 0;
        }
      }
    }
    free(__ptr);
  }
  return -1;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int gl_renderer_output_create
              (weston_output *output,void *window_for_legacy,void *window_for_platform,
              EGLint *attribs,EGLint *visual_id,int n_ids)

{
  EGLConfig pvVar1;
  _Bool _Var2;
  int iVar3;
  uint *__ptr;
  uint uVar4;
  _func_void_weston_compositor_ptr *p_Var5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  _func_void_weston_surface_ptr *p_Var9;
  _func_void_weston_surface_ptr_weston_buffer_ptr *p_Var10;
  weston_renderer *pwVar11;
  _func_void_weston_surface_ptr_float_float_float_float *p_Var12;
  weston_compositor *pwVar13;
  pixman_format_code_t pVar14;
  weston_renderer *pwVar15;
  weston_renderer *pwVar16;
  EGLConfig egl_config;
  EGLint r;
  EGLint g;
  EGLint b;
  EGLint a;
  
  pwVar13 = output->compositor;
  pwVar11 = pwVar13->renderer;
  iVar3 = egl_choose_config((gl_renderer *)&pwVar11[1].surface_set_color,attribs,visual_id,n_ids,
                            &egl_config);
  pvVar1 = egl_config;
  if (iVar3 == -1) {
    weston_log("failed to choose EGL config for output\n");
    return -1;
  }
  if ((pwVar11[1].surface_get_content_size !=
       (_func_void_weston_surface_ptr_int_ptr_int_ptr *)egl_config) &&
     (pwVar11[3].surface_get_content_size == (_func_void_weston_surface_ptr_int_ptr_int_ptr *)0x0))
  {
    weston_log(
              "attempted to use a different EGL config for an output but EGL_MESA_configless_context is not supported\n"
              );
    return -1;
  }
  __ptr = (uint *)calloc(1,0xd0);
  if (__ptr == (uint *)0x0) {
    return -1;
  }
  if (pwVar11[2].import_dmabuf == (_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr *)0x0)
  {
    uVar4 = eglCreateWindowSurface(pwVar11[1].surface_set_color,pvVar1,window_for_legacy,0);
    *__ptr = uVar4;
  }
  else {
    _Var2 = (*pwVar11[2].import_dmabuf)
                      ((weston_compositor *)pwVar11[1].surface_set_color,
                       (linux_dmabuf_buffer *)pvVar1);
    uVar4 = (uint)_Var2;
    *__ptr = uVar4;
  }
  if (uVar4 == 0) {
    weston_log("failed to create egl surface\n");
    free(__ptr);
    return -1;
  }
  if (pwVar11[1].destroy == (_func_void_weston_compositor_ptr *)0x0) {
    pwVar15 = pwVar13->renderer;
    iVar3 = eglBindAPI(0x30a0);
    if (iVar3 == 0) {
      weston_log("failed to bind EGL_OPENGL_ES_API\n");
      gl_renderer_print_egl_error_state();
LAB_00013a30:
      free(__ptr);
      return -1;
    }
    p_Var5 = (_func_void_weston_compositor_ptr *)
             eglCreateContext(pwVar15[1].surface_set_color,pwVar15[1].surface_get_content_size,0,
                              gl_renderer_setup::context_attribs);
    pwVar15[1].destroy = p_Var5;
    if (p_Var5 == (_func_void_weston_compositor_ptr *)0x0) {
      weston_log("failed to create context\n");
      gl_renderer_print_egl_error_state();
      goto LAB_00013a30;
    }
    iVar3 = eglMakeCurrent(pwVar15[1].surface_set_color,uVar4,uVar4);
    if (iVar3 == 0) {
      weston_log("Failed to make EGL context current.\n");
      gl_renderer_print_egl_error_state();
      goto LAB_00013a30;
    }
    p_Var12 = pwVar15[1].surface_set_color;
    puVar6 = (undefined *)eglQueryString(p_Var12,0x3054);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("EGL version: %s\n",puVar6);
    puVar6 = (undefined *)eglQueryString(p_Var12,0x3053);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("EGL vendor: %s\n",puVar6);
    puVar6 = (undefined *)eglQueryString(p_Var12,0x308d);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("EGL client APIs: %s\n",puVar6);
    pcVar7 = (char *)eglQueryString(p_Var12,0x3055);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "(null)";
    }
    log_extensions("EGL extensions",pcVar7);
    puVar6 = (undefined *)glGetString(0x1f02);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("GL version: %s\n",puVar6);
    puVar6 = (undefined *)glGetString(0x8b8c);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("GLSL version: %s\n",puVar6);
    puVar6 = (undefined *)glGetString(0x1f00);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("GL vendor: %s\n",puVar6);
    puVar6 = (undefined *)glGetString(0x1f01);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_0001a6d8;
    }
    weston_log("GL renderer: %s\n",puVar6);
    pcVar7 = (char *)glGetString(0x1f03);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "(null)";
    }
    log_extensions("GL extensions",pcVar7);
    p_Var12 = (_func_void_weston_surface_ptr_float_float_float_float *)
              eglGetProcAddress("glEGLImageTargetTexture2DOES");
    pwVar15[2].surface_set_color = p_Var12;
    pcVar7 = (char *)glGetString(0x1f03);
    if (pcVar7 == (char *)0x0) {
      weston_log("Retrieving GL extension string failed.\n");
      goto LAB_00013a30;
    }
    pcVar8 = strstr(pcVar7,"GL_EXT_texture_format_BGRA8888");
    if (pcVar8 == (char *)0x0) {
      weston_log("GL_EXT_texture_format_BGRA8888 not available\n");
      goto LAB_00013a30;
    }
    pcVar8 = strstr(pcVar7,"GL_EXT_read_format_bgra");
    pVar14 = PIXMAN_a8b8g8r8;
    if (pcVar8 != (char *)0x0) {
      pVar14 = PIXMAN_a8r8g8b8;
    }
    pwVar13->read_format = pVar14;
    pcVar8 = strstr(pcVar7,"GL_EXT_unpack_subimage");
    if (pcVar8 != (char *)0x0) {
      pwVar15[2].import_gbm_buffer = (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)0x1;
    }
    pcVar7 = strstr(pcVar7,"GL_OES_EGL_image_external");
    if (pcVar7 != (char *)0x0) {
      pwVar15[3].surface_set_color = (_func_void_weston_surface_ptr_float_float_float_float *)0x1;
    }
    glActiveTexture(0x84c0);
    pwVar16 = pwVar13->renderer;
    pwVar16[5].flush_damage =
         (_func_void_weston_surface_ptr *)
         "precision mediump float;\nvarying vec2 v_texcoord;\nuniform sampler2D tex;\nuniform float alpha;\nvoid main()\n{\n   gl_FragColor = alpha * texture2D(tex, v_texcoord)\n;"
    ;
    pwVar16[9].surface_get_content_size =
         (_func_void_weston_surface_ptr_int_ptr_int_ptr *)
         "precision mediump float;\nuniform sampler2D tex;\nuniform sampler2D tex1;\nuniform sampler2D tex2;\nvarying vec2 v_texcoord;\nuniform float alpha;\nvoid main() {\n  float y = 1.16438356 * (texture2D(tex, v_texcoord).x - 0.0625);\n  float u = texture2D(tex1, v_texcoord).x - 0.5;\n  float v = texture2D(tex2, v_texcoord).x - 0.5;\n  y *= alpha;\n  u *= alpha;\n  v *= alpha;\n  gl_FragColor.r = y + 1.59602678 * v;\n  gl_FragColor.g = y - 0.39176229 * u - 0.81296764 * v;\n  gl_FragColor.b = y + 2.01723214 * u;\n  gl_FragColor.a = alpha;\n"
    ;
    pwVar16[10].surface_copy_content =
         (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)
         "precision mediump float;\nuniform sampler2D tex;\nuniform sampler2D tex1;\nvarying vec2 v_texcoord;\nuniform float alpha;\nvoid main() {\n  float y = 1.16438356 * (texture2D(tex, v_texcoord).x - 0.0625);\n  float u = texture2D(tex1, v_texcoord).g - 0.5;\n  float v = texture2D(tex1, v_texcoord).a - 0.5;\n  y *= alpha;\n  u *= alpha;\n  v *= alpha;\n  gl_FragColor.r = y + 1.59602678 * v;\n  gl_FragColor.g = y - 0.39176229 * u - 0.81296764 * v;\n  gl_FragColor.b = y + 2.01723214 * u;\n  gl_FragColor.a = alpha;\n"
    ;
    pwVar16[6].attach =
         (_func_void_weston_surface_ptr_weston_buffer_ptr *)
         "precision mediump float;\nvarying vec2 v_texcoord;\nuniform sampler2D tex;\nuniform float alpha;\nvoid main()\n{\n   gl_FragColor.rgb = alpha * texture2D(tex, v_texcoord).rgb\n;   gl_FragColor.a = alpha;\n"
    ;
    pwVar16[7].surface_set_color =
         (_func_void_weston_surface_ptr_float_float_float_float *)
         "#extension GL_OES_EGL_image_external : require\nprecision mediump float;\nvarying vec2 v_texcoord;\nuniform samplerExternalOES tex;\nuniform float alpha;\nvoid main()\n{\n   gl_FragColor = alpha * texture2D(tex, v_texcoord)\n;"
    ;
    pwVar16[8].destroy =
         (_func_void_weston_compositor_ptr *)
         "precision mediump float;\nuniform sampler2D tex;\nuniform sampler2D tex1;\nvarying vec2 v_texcoord;\nuniform float alpha;\nvoid main() {\n  float y = 1.16438356 * (texture2D(tex, v_texcoord).x - 0.0625);\n  float u = texture2D(tex1, v_texcoord).r - 0.5;\n  float v = texture2D(tex1, v_texcoord).g - 0.5;\n  y *= alpha;\n  u *= alpha;\n  v *= alpha;\n  gl_FragColor.r = y + 1.59602678 * v;\n  gl_FragColor.g = y - 0.39176229 * u - 0.81296764 * v;\n  gl_FragColor.b = y + 2.01723214 * u;\n  gl_FragColor.a = alpha;\n"
    ;
    pwVar16[0xc].import_gbm_buffer =
         (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)
         "precision mediump float;\nuniform sampler2D tex;\nvarying vec2 v_texcoord;\nuniform vec4 color;\nuniform float alpha;\nvoid main()\n{\n   gl_FragColor = alpha * color\n;"
    ;
    pwVar16[5].repaint_output =
         (_func_void_weston_output_ptr_pixman_region32_t_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[6].flush_damage =
         (_func_void_weston_surface_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[7].attach =
         (_func_void_weston_surface_ptr_weston_buffer_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[8].surface_set_color =
         (_func_void_weston_surface_ptr_float_float_float_float *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[9].destroy =
         (_func_void_weston_compositor_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[10].surface_get_content_size =
         (_func_void_weston_surface_ptr_int_ptr_int_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    pwVar16[0xc].import_dmabuf =
         (_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr *)
         "uniform mat4 proj;\nattribute vec2 position;\nattribute vec2 texcoord;\nvarying vec2 v_texcoord;\nvoid main()\n{\n   gl_Position = proj * vec4(position, 0.0, 1.0);\n   v_texcoord = texcoord;\n}\n"
    ;
    p_Var9 = (_func_void_weston_surface_ptr *)
             weston_compositor_add_debug_binding(pwVar13,0x1f,fragment_debug_binding,pwVar13);
    pwVar15[1].flush_damage = p_Var9;
    p_Var10 = (_func_void_weston_surface_ptr_weston_buffer_ptr *)
              weston_compositor_add_debug_binding(pwVar13,0x21,fan_debug_repaint_binding,pwVar13);
    pwVar15[1].attach = p_Var10;
    weston_log("GL ES 2 renderer features:\n");
    if (pwVar13->read_format == PIXMAN_a8r8g8b8) {
      puVar6 = &DAT_0001a6e0;
    }
    else {
      puVar6 = &DAT_0001a6e8;
    }
    weston_log_continue("               read-back format: %s\n",puVar6);
    if (pwVar15[2].import_gbm_buffer == (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)0x0) {
      puVar6 = &DAT_0001a6f4;
    }
    else {
      puVar6 = &DAT_0001a6f0;
    }
    weston_log_continue("               wl_shm sub-image to texture: %s\n",puVar6);
    if (pwVar15[3].attach == (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0) {
      puVar6 = &DAT_0001a6f4;
    }
    else {
      puVar6 = &DAT_0001a6f0;
    }
    weston_log_continue("               EGL Wayland extension: %s\n",puVar6);
  }
  pixman_region32_init(__ptr + 1);
  pixman_region32_init(__ptr + 6);
  p_Var12 = pwVar11[1].surface_set_color;
  output->renderer_state = __ptr;
  weston_log("Chosen EGL config details:\n");
  weston_log_continue("               RGBA bits");
  iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x3024,&r);
  if ((iVar3 != 0) && (iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x3023,&g), iVar3 != 0)) {
    iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x3022,&b);
    if ((iVar3 != 0) && (iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x3021,&a), iVar3 != 0)) {
      weston_log_continue(": %d %d %d %d\n",r,g,b,a);
      goto LAB_000134f0;
    }
  }
  weston_log_continue(" unknown\n");
LAB_000134f0:
  weston_log_continue("               swap interval range");
  iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x303b,&a);
  if ((iVar3 == 0) || (iVar3 = eglGetConfigAttrib(p_Var12,egl_config,0x303c,&b), iVar3 == 0)) {
    weston_log_continue(" unknown\n");
  }
  else {
    weston_log_continue(": %d - %d\n",a,b);
  }
  return 0;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

egl_image * import_gbm_buffer(gl_renderer *gr,gbm_buffer *gbmbuf)

{
  egl_image *peVar1;
  EGLDisplay pvVar2;
  EGLImageKHR pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  EGLint attribs [30];
  
  attribs[0] = 0;
  peVar1 = (egl_image *)gbm_buffer_backend_get_user_data(gbmbuf);
  if (peVar1 == (egl_image *)0x0) {
    iVar4 = gbmbuf->num_planes;
    attribs[1] = gbmbuf->width;
    attribs[3] = gbmbuf->height;
    attribs[5] = gbmbuf->format;
    iVar5 = iVar4;
    if (iVar4 < 1) {
      iVar5 = 6;
    }
    attribs[0] = 0x3057;
    attribs[2] = 0x3056;
    attribs[4] = 0x3271;
    iVar6 = iVar5;
    if (0 < iVar4) {
      attribs[7] = gbmbuf->fd;
      bVar7 = iVar5 == 1;
      attribs[9] = gbmbuf->offset[0];
      attribs[0xb] = gbmbuf->stride[0];
      if (bVar7) {
        iVar5 = 0xc;
      }
      attribs[6] = 0x3272;
      attribs[8] = 0x3273;
      attribs[10] = 0x3274;
      iVar6 = iVar5;
      if (!bVar7) {
        attribs[0xf] = gbmbuf->offset[1];
        attribs[0x11] = gbmbuf->stride[1];
        iVar4 = -1;
        attribs[0xd] = -1;
        attribs[0xc] = 0x3275;
        if (iVar5 == 2) {
          iVar4 = 0x12;
        }
        attribs[0xe] = 0x3276;
        attribs[0x10] = 0x3277;
        iVar6 = iVar4;
        if (iVar5 != 2) {
          attribs[0x15] = gbmbuf->offset[2];
          attribs[0x17] = gbmbuf->stride[2];
          iVar6 = 0x18;
          attribs[0x12] = 0x3278;
          attribs[0x14] = 0x3279;
          attribs[0x16] = 0x327a;
          attribs[0x13] = iVar4;
        }
      }
    }
    attribs[iVar6] = 0x3038;
    peVar1 = (egl_image *)calloc(1,0x1c);
    wl_list_init(&peVar1->link);
    peVar1->refcount = 1;
    pvVar2 = gr->egl_display;
    peVar1->renderer = gr;
    pvVar3 = (*gr->create_image)(pvVar2,(EGLContext)0x0,0x3270,(EGLClientBuffer)0x0,attribs);
    peVar1->image = pvVar3;
    if (pvVar3 != (EGLImageKHR)0x0) {
      peVar1->gbmbuf = gbmbuf;
      wl_list_insert(&gr->gbmbuf_images,&peVar1->link);
      peVar1->refcount = peVar1->refcount + 1;
      gbm_buffer_backend_set_user_data(gbmbuf,peVar1,gl_renderer_destroy_gbm_buffer);
      return peVar1;
    }
    free(peVar1);
    peVar1 = (egl_image *)0x0;
  }
  else {
    peVar1->refcount = peVar1->refcount + 1;
  }
  return peVar1;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int gl_renderer_create(weston_compositor *ec,EGLenum platform,void *native_window,EGLint *attribs,
                      EGLint *visual_id,int n_ids)

{
  bool bVar1;
  weston_renderer *__ptr;
  _func_void_weston_surface_ptr_float_float_float_float *p_Var2;
  int iVar3;
  _func_void_weston_compositor_ptr *p_Var4;
  _func_void_weston_surface_ptr_int_ptr_int_ptr *p_Var5;
  _func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
  *p_Var6;
  _func_void_weston_output_ptr_pixman_region32_t_ptr *p_Var7;
  _func_void_weston_surface_ptr *p_Var8;
  _func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *p_Var9;
  _func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr *p_Var10;
  char *pcVar11;
  void *pvVar12;
  uint32_t uVar13;
  char *pcVar14;
  _func_void_weston_surface_ptr_int_ptr_int_ptr **config_out;
  uint32_t in_stack_ffffff94;
  uint32_t in_stack_ffffff98;
  EGLint major;
  EGLint minor;
  
  if (platform == 0) {
    bVar1 = false;
  }
  else {
    if (platform == 0x31d7) {
      pcVar14 = "gbm";
    }
    else if (platform == 0x31d8) {
      pcVar14 = "wayland";
    }
    else {
      if (platform != 0x31d5) {
                    // WARNING: Subroutine does not return
        __assert_fail("0 && \"bad EGL platform enum\"","../src/gl-renderer.c",0xb8d,
                      "platform_to_extension");
      }
      pcVar14 = "x11";
    }
    if (gl_renderer_supports::extensions == (char *)0x0) {
      gl_renderer_supports::extensions = (char *)eglQueryString(0,0x3055);
      if (gl_renderer_supports::extensions != (char *)0x0) {
        log_extensions("EGL client extensions",gl_renderer_supports::extensions);
        goto LAB_00014078;
      }
    }
    else {
LAB_00014078:
      pcVar11 = strstr(gl_renderer_supports::extensions,"EGL_EXT_platform_base");
      if (pcVar11 != (char *)0x0) {
        snprintf((char *)&minor,0x40,"EGL_KHR_platform_%s",pcVar14);
        pcVar11 = strstr(gl_renderer_supports::extensions,(char *)&minor);
        if (pcVar11 == (char *)0x0) {
          snprintf((char *)&minor,0x40,"EGL_EXT_platform_%s",pcVar14);
          pcVar11 = strstr(gl_renderer_supports::extensions,(char *)&minor);
          if (pcVar11 == (char *)0x0) {
            snprintf((char *)&minor,0x40,"EGL_MESA_platform_%s",pcVar14);
            pcVar14 = strstr(gl_renderer_supports::extensions,(char *)&minor);
            if (pcVar14 == (char *)0x0) {
              return -1;
            }
          }
        }
        bVar1 = true;
        goto LAB_00013da4;
      }
    }
    bVar1 = false;
  }
LAB_00013da4:
  __ptr = (weston_renderer *)calloc(1,0x214);
  if (__ptr == (weston_renderer *)0x0) {
    return -1;
  }
  __ptr->read_pixels = gl_renderer_read_pixels;
  __ptr->flush_damage = gl_renderer_flush_damage;
  __ptr->attach = gl_renderer_attach;
  __ptr->repaint_output = gl_renderer_repaint_output;
  __ptr[1].surface_copy_content =
       (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)native_window;
  __ptr->surface_set_color = gl_renderer_surface_set_color;
  __ptr->destroy = gl_renderer_destroy;
  __ptr->surface_get_content_size = gl_renderer_surface_get_content_size;
  __ptr->surface_copy_content = gl_renderer_surface_copy_content;
  __ptr[1].surface_set_color = (_func_void_weston_surface_ptr_float_float_float_float *)0x0;
  if (bVar1) {
    if (get_platform_display == (PFNEGLGETPLATFORMDISPLAYEXTPROC)0x0) {
      get_platform_display =
           (PFNEGLGETPLATFORMDISPLAYEXTPROC)eglGetProcAddress("eglGetPlatformDisplayEXT");
      if (get_platform_display != (PFNEGLGETPLATFORMDISPLAYEXTPROC)0x0 && platform != 0)
      goto LAB_0001403c;
      p_Var2 = __ptr[1].surface_set_color;
    }
    else {
      if (platform == 0) goto LAB_00013e2c;
LAB_0001403c:
      p_Var2 = (_func_void_weston_surface_ptr_float_float_float_float *)
               (*get_platform_display)(platform,native_window,(EGLint *)0x0);
      __ptr[1].surface_set_color = p_Var2;
    }
    if (p_Var2 == (_func_void_weston_surface_ptr_float_float_float_float *)0x0) goto LAB_00013e2c;
  }
  else {
LAB_00013e2c:
    weston_log(
              "warning: either no EGL_EXT_platform_base support or specific platform support; falling back to eglGetDisplay.\n"
              );
    p_Var2 = (_func_void_weston_surface_ptr_float_float_float_float *)eglGetDisplay(native_window);
    __ptr[1].surface_set_color = p_Var2;
    if (p_Var2 == (_func_void_weston_surface_ptr_float_float_float_float *)0x0) {
      weston_log("failed to create display\n");
      goto LAB_00014154;
    }
  }
  iVar3 = eglInitialize(p_Var2,&major,&minor);
  if (iVar3 == 0) {
    weston_log("failed to initialize display\n");
LAB_00014148:
    gl_renderer_print_egl_error_state();
  }
  else {
    config_out = &__ptr[1].surface_get_content_size;
    iVar3 = egl_choose_config((gl_renderer *)&__ptr[1].surface_set_color,attribs,visual_id,n_ids,
                              config_out);
    if (-1 < iVar3) {
      ec->renderer = __ptr;
      ec->capabilities = ec->capabilities | 0x13;
      p_Var4 = (_func_void_weston_compositor_ptr *)eglGetProcAddress("eglCreateImageKHR");
      pvVar12 = (void *)0x6da4;
      __ptr[2].destroy = p_Var4;
      p_Var5 = (_func_void_weston_surface_ptr_int_ptr_int_ptr *)
               eglGetProcAddress("eglDestroyImageKHR");
      uVar13 = 0x6da8;
      __ptr[2].surface_get_content_size = p_Var5;
      p_Var6 = (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                *)eglGetProcAddress("eglBindWaylandDisplayWL");
      __ptr[3].read_pixels = p_Var6;
      p_Var7 = (_func_void_weston_output_ptr_pixman_region32_t_ptr *)
               eglGetProcAddress("eglUnbindWaylandDisplayWL");
      __ptr[3].repaint_output = p_Var7;
      p_Var8 = (_func_void_weston_surface_ptr *)eglGetProcAddress("eglQueryWaylandBufferWL");
      __ptr[3].flush_damage = p_Var8;
      pcVar14 = (char *)eglQueryString(__ptr[1].surface_set_color,0x3055);
      if (pcVar14 != (char *)0x0) {
        pcVar11 = strstr(pcVar14,"EGL_WL_bind_wayland_display");
        if (pcVar11 == (char *)0x0) {
          if (__ptr[3].attach == (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0)
          goto LAB_00013f2c;
        }
        else {
          __ptr[3].attach = (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x1;
        }
        iVar3 = (*__ptr[3].read_pixels)
                          ((weston_output *)__ptr[1].surface_set_color,
                           (pixman_format_code_t)ec->wl_display,pvVar12,uVar13,(uint32_t)config_out,
                           in_stack_ffffff94,in_stack_ffffff98);
        if (iVar3 == 0) {
          __ptr[3].attach = (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0;
        }
LAB_00013f2c:
        pcVar11 = strstr(pcVar14,"EGL_EXT_buffer_age");
        if (pcVar11 == (char *)0x0) {
          weston_log("warning: EGL_EXT_buffer_age not supported. Performance could be affected.\n");
        }
        else {
          __ptr[3].destroy = (_func_void_weston_compositor_ptr *)0x1;
        }
        pcVar11 = strstr(pcVar14,"EGL_EXT_swap_buffers_with_damage");
        if (pcVar11 == (char *)0x0) {
          weston_log(
                    "warning: EGL_EXT_swap_buffers_with_damage not supported. Performance could be affected.\n"
                    );
        }
        else {
          p_Var9 = (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)
                   eglGetProcAddress("eglSwapBuffersWithDamageEXT");
          __ptr[2].surface_copy_content = p_Var9;
        }
        pcVar14 = strstr(pcVar14,"EGL_EXT_image_dma_buf_import");
        if (pcVar14 != (char *)0x0) {
          __ptr[3].surface_copy_content =
               (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)0x1;
        }
        pcVar14 = (char *)eglQueryString(0,0x3055);
        if (pcVar14 == (char *)0x0) {
          weston_log("Retrieving EGL client extension string failed.\n");
        }
        else {
          pcVar14 = strstr(pcVar14,"EGL_EXT_platform_base");
          if (pcVar14 == (char *)0x0) {
            weston_log("warning: EGL_EXT_platform_base not supported.\n");
          }
          else {
            p_Var10 = (_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr *)
                      eglGetProcAddress("eglCreatePlatformWindowSurfaceEXT");
            __ptr[2].import_dmabuf = p_Var10;
          }
        }
        wl_list_init(&__ptr[3].import_dmabuf);
        wl_list_init(__ptr + 4);
        if (__ptr[3].surface_copy_content !=
            (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)0x0) {
          __ptr->import_dmabuf = gl_renderer_import_dmabuf;
          __ptr->import_gbm_buffer = gl_renderer_import_gbm_buffer;
        }
        wl_display_add_shm_format(ec->wl_display,0x36314752);
        wl_list_init(&__ptr[0xd].repaint_output);
        return 0;
      }
      weston_log("Retrieving EGL extension string failed.\n");
      goto LAB_00014148;
    }
    weston_log("failed to choose EGL config\n");
  }
  eglTerminate(__ptr[1].surface_set_color);
LAB_00014154:
  free(__ptr);
  return -1;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int gl_renderer_read_pixels
              (weston_output *output,pixman_format_code_t format,void *pixels,uint32_t x,uint32_t y,
              uint32_t width,uint32_t height)

{
  weston_renderer *pwVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (format == PIXMAN_a8r8g8b8) {
    uVar3 = 0x80e1;
  }
  else {
    if (format != PIXMAN_a8b8g8r8) {
      return -1;
    }
    uVar3 = 0x1908;
  }
  puVar5 = (undefined4 *)output->renderer_state;
  pwVar1 = output->compositor->renderer;
  iVar4 = puVar5[0x14];
  iVar6 = puVar5[0x1f];
  iVar2 = eglMakeCurrent(pwVar1[1].surface_set_color,*puVar5,*puVar5,pwVar1[1].destroy);
  if (iVar2 == 0) {
    if (use_output::errored == 0) {
      use_output::errored = 1;
      weston_log("Failed to make EGL context current.\n");
      gl_renderer_print_egl_error_state();
    }
    return -1;
  }
  glPixelStorei(0xd05,1);
  glReadPixels(iVar4 + x,iVar6 + y,width,height,uVar3,0x1401,pixels);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000145a8)
// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

_Bool gl_renderer_import_gbm_buffer(weston_compositor *ec,gbm_buffer *gbm_buf)

{
  gbm_bo *pgVar1;
  int iVar2;
  generic_buf_layout_t *pgVar3;
  egl_image *image;
  uint32_t *puVar4;
  uint32_t *puVar5;
  _Bool _Var6;
  uint unaff_r4;
  uint32_t uVar7;
  gl_renderer *gr;
  uint secure_status;
  uint secure_status_1;
  gbm_buf_info buf_info;
  generic_buf_layout_t buf_lyt;
  
  gr = (gl_renderer *)ec->renderer;
  buf_info.height = gbm_buf->height;
  buf_info.width = gbm_buf->width;
  buf_info.format = gbm_buf->format;
  buf_info.fd = gbm_buf->fd;
  buf_info.metadata_fd = gbm_buf->metadata_fd;
  pgVar1 = (gbm_bo *)gbm_bo_import(gr->gbm_hdle,0x4fff,&buf_info,4);
  gbm_buf->bo = pgVar1;
  iVar2 = gbm_perform(0x18,pgVar1,&buf_lyt);
  if (iVar2 == 0) {
    puts("GET YUV Info success");
    gbm_buf->num_planes = buf_lyt.num_planes;
    if (buf_lyt.num_planes != 0) {
      pgVar3 = &buf_lyt;
      puVar4 = &gbm_buf->flags;
      do {
        uVar7 = pgVar3->planes[0].v_increment;
        puVar5 = puVar4 + 1;
        *puVar5 = pgVar3->planes[0].offset;
        puVar4[4] = uVar7;
        pgVar3 = (generic_buf_layout_t *)&pgVar3->planes[0].h_subsampling;
        puVar4 = puVar5;
      } while (puVar5 != gbm_buf->offset + (buf_lyt.num_planes - 1));
      if (2 < buf_lyt.num_planes) goto LAB_000144c8;
    }
  }
  else {
    weston_log("gl_renderer_import_gbm_buffer::GET YUV Info failed\n");
    buf_lyt.num_planes = unaff_r4;
    if (2 < unaff_r4) goto LAB_000144c8;
  }
  puVar4 = gbm_buf->offset + buf_lyt.num_planes;
  do {
    buf_lyt.num_planes = buf_lyt.num_planes + 1;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4 = puVar4 + 1;
  } while (buf_lyt.num_planes != 3);
LAB_000144c8:
  gbm_perform(0x23,gbm_buf->bo);
  if (gbm_buf->format == 0x30313050 || gbm_buf->format == 0x41323151) {
    _Var6 = true;
  }
  else {
    _Var6 = false;
    gbm_perform(0x23,gbm_buf->bo);
    if (gbm_buf->format == 0x30313050 || gbm_buf->format == 0x41323151) {
      image = (egl_image *)0x0;
    }
    else {
      image = import_gbm_buffer(gr,gbm_buf);
    }
    if (image != (egl_image *)0x0) {
      _Var6 = true;
      egl_image_unref(image);
    }
  }
  return _Var6;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void fragment_debug_binding(weston_keyboard *keyboard,uint32_t time,uint32_t key,void *data)

{
  weston_output *output;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)data + 0x1b4);
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) ^ 1;
  glDeleteShader(*(undefined4 *)(iVar2 + 0xac));
  glDeleteShader(*(undefined4 *)(iVar2 + 0xb0));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0xa8));
  *(undefined4 *)(iVar2 + 0xac) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0xd8));
  glDeleteShader(*(undefined4 *)(iVar2 + 0xdc));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0xd4));
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0x104));
  glDeleteShader(*(undefined4 *)(iVar2 + 0x108));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0x100));
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0x130));
  glDeleteShader(*(undefined4 *)(iVar2 + 0x134));
  glDeleteProgram(*(undefined4 *)(iVar2 + 300));
  *(undefined4 *)(iVar2 + 0x130) = 0;
  *(undefined4 *)(iVar2 + 0x134) = 0;
  *(undefined4 *)(iVar2 + 300) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0x15c));
  glDeleteShader(*(undefined4 *)(iVar2 + 0x160));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0x158));
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  *(undefined4 *)(iVar2 + 0x160) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0x188));
  glDeleteShader(*(undefined4 *)(iVar2 + 0x18c));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0x184));
  *(undefined4 *)(iVar2 + 0x188) = 0;
  *(undefined4 *)(iVar2 + 0x18c) = 0;
  *(undefined4 *)(iVar2 + 0x184) = 0;
  glDeleteShader(*(undefined4 *)(iVar2 + 0x1e0));
  glDeleteShader(*(undefined4 *)(iVar2 + 0x1e4));
  glDeleteProgram(*(undefined4 *)(iVar2 + 0x1dc));
  iVar1 = *(int *)((int)data + 0x10c);
  *(undefined4 *)(iVar2 + 0x1e0) = 0;
  *(undefined4 *)(iVar2 + 0x1e4) = 0;
  *(undefined4 *)(iVar2 + 0x1dc) = 0;
  *(undefined4 *)(iVar2 + 0x208) = 0;
  if ((int)data + 0x108 != iVar1) {
    do {
      weston_output_damage(iVar1 + -0xc);
      iVar1 = *(int *)(iVar1 + 4);
    } while ((int)data + 0x108 != iVar1);
    return;
  }
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int shader_init(gl_shader *shader,gl_renderer *renderer,char *vertex_source,char *fragment_source)

{
  char **ppcVar1;
  GLuint GVar2;
  char *pcVar3;
  GLint GVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *local_23c [2];
  GLint status;
  char *sources [4];
  char msg [512];
  
  local_23c[0] = vertex_source;
  GVar2 = glCreateShader(0x8b31);
  glShaderSource(GVar2,1,local_23c,0);
  glCompileShader(GVar2);
  glGetShaderiv(GVar2,0x8b81,sources);
  if (sources[0] == (char *)0x0) {
    glGetShaderInfoLog(GVar2,0x200,0,msg);
    weston_log("shader info: %s\n",msg);
    GVar2 = 0;
  }
  shader->vertex_shader = GVar2;
  if ((renderer->base).read_pixels ==
      (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
       *)0x0) {
    iVar8 = 3;
    iVar7 = 2;
    iVar6 = 1;
  }
  else {
    iVar8 = 4;
    iVar7 = 3;
    iVar6 = 2;
    sources[1] = "  gl_FragColor = vec4(0.0, 0.3, 0.0, 0.2) + gl_FragColor * 0.8;\n";
  }
  sources[0] = fragment_source;
  pcVar3 = color_correction_get_shader();
  iVar5 = 0;
  sources[iVar6] = pcVar3;
  sources[iVar7] = "}\n";
  puts("Compiling shader:");
  do {
    ppcVar1 = sources + iVar5;
    iVar5 = iVar5 + 1;
    printf("%s",*ppcVar1);
  } while (iVar5 != iVar8);
  putchar(10);
  GVar2 = glCreateShader(0x8b30);
  glShaderSource(GVar2,iVar5,sources,0);
  glCompileShader(GVar2);
  glGetShaderiv(GVar2,0x8b81,&status);
  if (status == 0) {
    glGetShaderInfoLog(GVar2,0x200,0,msg);
    weston_log("shader info: %s\n",msg);
    GVar2 = 0;
  }
  shader->fragment_shader = GVar2;
  GVar2 = glCreateProgram();
  shader->program = GVar2;
  glAttachShader(GVar2,shader->vertex_shader);
  glAttachShader(shader->program,shader->fragment_shader);
  glBindAttribLocation(shader->program,0,"position");
  glBindAttribLocation(shader->program,1,"texcoord");
  glLinkProgram(shader->program);
  glGetProgramiv(shader->program,0x8b82,&status);
  if (status == 0) {
    glGetProgramInfoLog(shader->program,0x200,0,msg);
    weston_log("link info: %s\n",msg);
    iVar6 = -1;
  }
  else {
    GVar4 = glGetUniformLocation(shader->program,&DAT_0001af40);
    shader->proj_uniform = GVar4;
    GVar4 = glGetUniformLocation(shader->program,&DAT_0001af48);
    shader->tex_uniforms[0] = GVar4;
    GVar4 = glGetUniformLocation(shader->program,&DAT_0001af4c);
    shader->tex_uniforms[1] = GVar4;
    GVar4 = glGetUniformLocation(shader->program,&DAT_0001af54);
    shader->tex_uniforms[2] = GVar4;
    GVar4 = glGetUniformLocation(shader->program,"alpha");
    shader->alpha_uniform = GVar4;
    GVar4 = glGetUniformLocation(shader->program,"color");
    iVar6 = 0;
    shader->color_uniform = GVar4;
  }
  return iVar6;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

egl_image * import_dmabuf(gl_renderer *gr,linux_dmabuf_buffer *dmabuf)

{
  egl_image *__ptr;
  EGLDisplay pvVar1;
  EGLImageKHR pvVar2;
  int iVar3;
  int iVar4;
  PFNEGLCREATEIMAGEKHRPROC p_Var5;
  bool bVar6;
  EGLint attribs [30];
  
  iVar3 = dmabuf->n_planes;
  attribs[1] = dmabuf->width;
  attribs[3] = dmabuf->height;
  attribs[5] = dmabuf->format;
  iVar4 = iVar3;
  if (iVar3 < 1) {
    iVar4 = 6;
  }
  attribs[0] = 0x3057;
  attribs[2] = 0x3056;
  attribs[4] = 0x3271;
  if (0 < iVar3) {
    attribs[7] = dmabuf->dmabuf_fd[0];
    bVar6 = iVar4 == 1;
    attribs[9] = dmabuf->offset[0];
    attribs[0xb] = dmabuf->stride[0];
    if (bVar6) {
      iVar4 = 0xc;
    }
    attribs[6] = 0x3272;
    attribs[8] = 0x3273;
    attribs[10] = 0x3274;
    if (!bVar6) {
      attribs[0xd] = dmabuf->dmabuf_fd[1];
      bVar6 = iVar4 == 2;
      attribs[0xf] = dmabuf->offset[1];
      iVar4 = 0x3277;
      attribs[0x11] = dmabuf->stride[1];
      attribs[0x10] = 0x3277;
      if (bVar6) {
        iVar4 = 0x12;
      }
      attribs[0xc] = 0x3275;
      attribs[0xe] = 0x3276;
      if (!bVar6) {
        attribs[0x13] = dmabuf->dmabuf_fd[2];
        attribs[0x15] = dmabuf->offset[2];
        attribs[0x17] = dmabuf->stride[2];
        iVar4 = 0x18;
        attribs[0x12] = 0x3278;
        attribs[0x14] = 0x3279;
        attribs[0x16] = 0x327a;
      }
    }
  }
  attribs[iVar4] = 0x3038;
  __ptr = (egl_image *)calloc(1,0x1c);
  wl_list_init(&__ptr->link);
  p_Var5 = gr->create_image;
  pvVar1 = gr->egl_display;
  __ptr->renderer = gr;
  __ptr->refcount = 1;
  pvVar2 = (*p_Var5)(pvVar1,(EGLContext)0x0,0x3270,(EGLClientBuffer)0x0,attribs);
  __ptr->image = pvVar2;
  if (pvVar2 == (EGLImageKHR)0x0) {
    free(__ptr);
    __ptr = (egl_image *)0x0;
  }
  else {
    __ptr->dmabuf = dmabuf;
    wl_list_insert(&gr->dmabuf_images,&__ptr->link);
    __ptr->refcount = __ptr->refcount + 1;
    linux_dmabuf_buffer_set_user_data(dmabuf,__ptr,gl_renderer_destroy_dmabuf);
  }
  return __ptr;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

_Bool gl_renderer_import_dmabuf(weston_compositor *ec,linux_dmabuf_buffer *dmabuf)

{
  int *piVar1;
  egl_image *image;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  gl_renderer *gr;
  
  gr = (gl_renderer *)ec->renderer;
  if (gr->has_dmabuf_import == 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("gr->has_dmabuf_import","../src/gl-renderer.c",0x65c,"gl_renderer_import_dmabuf");
  }
  if (dmabuf->n_planes < 1) {
LAB_00014c28:
    if ((dmabuf->flags & 0xfffffffe) == 0) {
      image = (egl_image *)linux_dmabuf_buffer_get_user_data(dmabuf);
      if (image == (egl_image *)0x0) {
        image = import_dmabuf(gr,dmabuf);
        if (image == (egl_image *)0x0) {
          return false;
        }
      }
      else {
        image->refcount = image->refcount + 1;
      }
      egl_image_unref(image);
      return true;
    }
  }
  else if ((int)dmabuf->modifier[0] == 0 && *(int *)((int)dmabuf->modifier + 4) == 0) {
    iVar4 = 0;
    puVar3 = dmabuf->modifier;
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == dmabuf->n_planes) goto LAB_00014c28;
      puVar2 = puVar3 + 1;
      piVar1 = (int *)((int)puVar3 + 0xc);
      puVar3 = puVar2;
    } while ((int)*puVar2 == 0 && *piVar1 == 0);
  }
  return false;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_destroy(weston_compositor *ec)

{
  _func_void_weston_surface_ptr *p_Var1;
  code *__ptr;
  _func__Bool_weston_compositor_ptr_gbm_buffer_ptr *p_Var2;
  _func_void_weston_surface_ptr *p_Var3;
  _func_void_weston_surface_ptr *p_Var4;
  _func__Bool_weston_compositor_ptr_gbm_buffer_ptr *p_Var5;
  weston_renderer *__ptr_00;
  int iVar6;
  int iVar7;
  
  __ptr_00 = ec->renderer;
  p_Var4 = *(_func_void_weston_surface_ptr **)(__ptr_00[0xd].flush_damage + 4);
  p_Var3 = __ptr_00[0xd].flush_damage;
  while (p_Var1 = p_Var4,
        (_func_void_weston_output_ptr_pixman_region32_t_ptr **)p_Var3 !=
        &__ptr_00[0xd].repaint_output) {
    (**(code **)(p_Var3 + 8))(p_Var3,__ptr_00);
    p_Var4 = *(_func_void_weston_surface_ptr **)(p_Var1 + 4);
    p_Var3 = p_Var1;
  }
  if (__ptr_00[3].attach != (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0) {
    (*__ptr_00[3].repaint_output)
              ((weston_output *)__ptr_00[1].surface_set_color,(pixman_region32_t *)ec->wl_display);
  }
  eglMakeCurrent(__ptr_00[1].surface_set_color,0,0);
  p_Var5 = __ptr_00[3].import_gbm_buffer;
  if (&__ptr_00[3].import_dmabuf !=
      (_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr **)p_Var5) {
    iVar6 = *(int *)(p_Var5 + -0x14);
    if (*(int *)(p_Var5 + -0xc) < 1) {
LAB_00014e64:
                    // WARNING: Subroutine does not return
      __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
    }
    iVar7 = *(int *)(p_Var5 + -0xc) + -1;
    *(int *)(p_Var5 + -0xc) = iVar7;
    __ptr = p_Var5 + -0x14;
    p_Var2 = *(_func__Bool_weston_compositor_ptr_gbm_buffer_ptr **)(p_Var5 + 4);
    while( true ) {
      if (iVar7 != 0) {
                    // WARNING: Subroutine does not return
        __assert_fail("ret == 0","../src/gl-renderer.c",0xacf,"gl_renderer_destroy");
      }
      if (*(int *)(__ptr + 0xc) != 0) {
        linux_dmabuf_buffer_set_user_data(*(int *)(__ptr + 0xc),0);
      }
      if (*(int *)(__ptr + 0x10) != 0) {
        gbm_buffer_backend_set_user_data(*(int *)(__ptr + 0x10),0);
      }
      (**(code **)(iVar6 + 0x68))(*(undefined4 *)(iVar6 + 0x38),*(int *)(__ptr + 4));
      wl_list_remove(p_Var5);
      free(__ptr);
      if ((_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr **)p_Var2 ==
          &__ptr_00[3].import_dmabuf) break;
      iVar6 = *(int *)(p_Var2 + -0x14);
      if (*(int *)(p_Var2 + -0xc) < 1) goto LAB_00014e64;
      iVar7 = *(int *)(p_Var2 + -0xc) + -1;
      *(int *)(p_Var2 + -0xc) = iVar7;
      p_Var5 = p_Var2;
      __ptr = p_Var2 + -0x14;
      p_Var2 = *(_func__Bool_weston_compositor_ptr_gbm_buffer_ptr **)(p_Var2 + 4);
    }
  }
  eglTerminate(__ptr_00[1].surface_set_color);
  eglReleaseThread();
  wl_array_release(&__ptr_00[1].import_dmabuf);
  wl_array_release(&__ptr_00[2].repaint_output);
  if (__ptr_00[1].flush_damage != (_func_void_weston_surface_ptr *)0x0) {
    weston_binding_destroy();
  }
  if (__ptr_00[1].attach != (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0) {
    weston_binding_destroy();
  }
  free(__ptr_00);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void surface_state_handle_renderer_destroy(wl_listener *listener,void *data)

{
  wl_list *pwVar1;
  wl_notify_func_t p_Var2;
  gl_renderer *gr;
  wl_list *__ptr;
  int iVar3;
  wl_list **ppwVar4;
  wl_list *pwVar5;
  
  iVar3 = 0;
  wl_list_remove(listener + -1);
  wl_list_remove(listener);
  pwVar1 = listener[-9].link.next;
  *(undefined4 *)(listener[-2].notify + 0x5c) = 0;
  glDeleteTextures(pwVar1,&listener[-10].link.next);
  p_Var2 = listener[-5].notify;
  if ((int)p_Var2 < 1) {
LAB_00014fa0:
    weston_buffer_reference(listener + -4,0);
    pixman_region32_fini(listener + -8);
    free(&listener[-0xc].notify);
    return;
  }
  __ptr = listener[-6].link.next;
  pwVar1 = __ptr[1].prev;
  pwVar5 = __ptr->prev;
  if (0 < (int)pwVar1) {
    ppwVar4 = &listener[-6].link.next;
    do {
      pwVar1 = (wl_list *)((int)&pwVar1[-1].next + 3);
      __ptr[1].prev = pwVar1;
      if (pwVar1 == (wl_list *)0x0) {
        if (__ptr[1].next != (wl_list *)0x0) {
          linux_dmabuf_buffer_set_user_data(__ptr[1].next,0);
        }
        if (__ptr[2].prev != (wl_list *)0x0) {
          gbm_buffer_backend_set_user_data(__ptr[2].prev,0);
        }
        (*(code *)pwVar5[0xd].prev)(pwVar5[7].prev,__ptr->next);
        wl_list_remove(&__ptr[2].next);
        free(__ptr);
        p_Var2 = listener[-5].notify;
        if ((int)p_Var2 <= iVar3 + 1) goto LAB_00014fa0;
      }
      else if ((int)p_Var2 <= iVar3 + 1) goto LAB_00014fa0;
      iVar3 = iVar3 + 1;
      ppwVar4 = ppwVar4 + 1;
      __ptr = *ppwVar4;
      pwVar1 = __ptr[1].prev;
      pwVar5 = __ptr->prev;
    } while (0 < (int)pwVar1);
  }
                    // WARNING: Subroutine does not return
  __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
}



void surface_state_handle_surface_destroy(wl_listener *listener,void *data)

{
  wl_list *pwVar1;
  wl_notify_func_t p_Var2;
  wl_list *__ptr;
  int iVar3;
  wl_list **ppwVar4;
  wl_list *pwVar5;
  
  wl_list_remove();
  iVar3 = 0;
  wl_list_remove(listener + 1);
  pwVar1 = listener[-8].link.next;
  *(undefined4 *)(listener[-1].notify + 0x5c) = 0;
  glDeleteTextures(pwVar1,&listener[-9].link.next);
  p_Var2 = listener[-4].notify;
  if ((int)p_Var2 < 1) {
LAB_000150cc:
    weston_buffer_reference(listener + -3,0);
    pixman_region32_fini(listener + -7);
    free(&listener[-0xb].notify);
    return;
  }
  __ptr = listener[-5].link.next;
  pwVar1 = __ptr[1].prev;
  pwVar5 = __ptr->prev;
  if (0 < (int)pwVar1) {
    ppwVar4 = &listener[-5].link.next;
    do {
      pwVar1 = (wl_list *)((int)&pwVar1[-1].next + 3);
      __ptr[1].prev = pwVar1;
      if (pwVar1 == (wl_list *)0x0) {
        if (__ptr[1].next != (wl_list *)0x0) {
          linux_dmabuf_buffer_set_user_data(__ptr[1].next,0);
        }
        if (__ptr[2].prev != (wl_list *)0x0) {
          gbm_buffer_backend_set_user_data(__ptr[2].prev,0);
        }
        (*(code *)pwVar5[0xd].prev)(pwVar5[7].prev,__ptr->next);
        wl_list_remove(&__ptr[2].next);
        free(__ptr);
        p_Var2 = listener[-4].notify;
        if ((int)p_Var2 <= iVar3 + 1) goto LAB_000150cc;
      }
      else if ((int)p_Var2 <= iVar3 + 1) goto LAB_000150cc;
      iVar3 = iVar3 + 1;
      ppwVar4 = ppwVar4 + 1;
      __ptr = *ppwVar4;
      pwVar1 = __ptr[1].prev;
      pwVar5 = __ptr->prev;
    } while (0 < (int)pwVar1);
  }
                    // WARNING: Subroutine does not return
  __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_destroy_dmabuf(linux_dmabuf_buffer *dmabuf)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  
  __ptr = (int *)dmabuf->user_data;
  iVar2 = *__ptr;
  if (__ptr[2] < 1) {
                    // WARNING: Subroutine does not return
    __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
  }
  iVar1 = __ptr[2] + -1;
  __ptr[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (__ptr[3] != 0) {
    linux_dmabuf_buffer_set_user_data(__ptr[3],0);
  }
  if (__ptr[4] != 0) {
    gbm_buffer_backend_set_user_data(__ptr[4],0);
  }
  (**(code **)(iVar2 + 0x68))(*(undefined4 *)(iVar2 + 0x38),__ptr[1]);
  wl_list_remove(__ptr + 5);
  free(__ptr);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_destroy_gbm_buffer(gbm_buffer *gbm_buf)

{
  int iVar1;
  int *__ptr;
  int iVar2;
  
  __ptr = (int *)gbm_buf->user_data;
  iVar2 = *__ptr;
  if (__ptr[2] < 1) {
                    // WARNING: Subroutine does not return
    __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
  }
  iVar1 = __ptr[2] + -1;
  __ptr[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if (__ptr[3] != 0) {
    linux_dmabuf_buffer_set_user_data(__ptr[3],0);
  }
  if (__ptr[4] != 0) {
    gbm_buffer_backend_set_user_data(__ptr[4],0);
  }
  (**(code **)(iVar2 + 0x68))(*(undefined4 *)(iVar2 + 0x38),__ptr[1]);
  wl_list_remove(__ptr + 5);
  free(__ptr);
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_attach(weston_surface *es,weston_buffer *buffer)

{
  wl_shm_buffer *pwVar1;
  int32_t iVar2;
  int iVar3;
  undefined4 uVar4;
  linux_dmabuf_buffer *dmabuf;
  undefined4 *__ptr;
  weston_compositor *pwVar5;
  gbm_buffer *gbmbuf;
  gl_shader *pgVar6;
  wl_list *pwVar7;
  egl_image *peVar8;
  weston_buffer *pwVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int iVar14;
  int *piVar15;
  uint32_t uVar16;
  gl_renderer *gr;
  weston_renderer *pwVar17;
  int iVar18;
  int32_t iVar19;
  int iVar20;
  _func_void_weston_surface_ptr_weston_buffer_ptr **pp_Var21;
  undefined8 uVar22;
  float extraout_s2;
  float extraout_s3;
  EGLint format;
  uint secure_status;
  EGLint attribs [3];
  
  pvVar13 = es->renderer_state;
  pwVar17 = es->compositor->renderer;
  if ((pvVar13 == (void *)0x0) && (pvVar13 = calloc(1,0x94), pvVar13 != (void *)0x0)) {
    *(undefined4 *)((int)pvVar13 + 0x6c) = 1;
    *(undefined4 *)((int)pvVar13 + 0x74) = 1;
    *(weston_surface **)((int)pvVar13 + 0x78) = es;
    pixman_region32_init((int)pvVar13 + 0x28);
    es->renderer_state = pvVar13;
    pwVar7 = (es->destroy_signal).listener_list.prev;
    *(code **)((int)pvVar13 + 0x84) = surface_state_handle_surface_destroy;
    wl_list_insert(pwVar7,(int)pvVar13 + 0x7c);
    *(code **)((int)pvVar13 + 0x90) = surface_state_handle_renderer_destroy;
    wl_list_insert(pwVar17[0xd].repaint_output,(int)pvVar13 + 0x88);
    pwVar9 = (es->buffer_ref).buffer;
    if (pwVar9 != (weston_buffer *)0x0) {
      gl_renderer_attach(es,pwVar9);
      gl_renderer_flush_damage(es);
    }
    pvVar13 = es->renderer_state;
  }
  weston_buffer_reference((int)pvVar13 + 0x58,buffer);
  if (buffer == (weston_buffer *)0x0) {
    iVar3 = *(int *)((int)pvVar13 + 0x54);
    if (iVar3 < 1) {
LAB_0001549c:
      *(undefined4 *)((int)pvVar13 + 0x54) = 0;
      glDeleteTextures(*(undefined4 *)((int)pvVar13 + 0x20),(int)pvVar13 + 0x14);
      *(undefined4 *)((int)pvVar13 + 0x20) = 0;
      *(undefined4 *)((int)pvVar13 + 0x68) = 0;
      *(undefined4 *)((int)pvVar13 + 0x74) = 1;
      return;
    }
    piVar15 = *(int **)((int)pvVar13 + 0x44);
    iVar18 = piVar15[2];
    iVar20 = *piVar15;
    if (0 < iVar18) {
      puVar12 = (undefined4 *)((int)pvVar13 + 0x44);
      iVar11 = 0;
      do {
        piVar15[2] = iVar18 + -1;
        if (iVar18 + -1 == 0) {
          if (piVar15[3] != 0) {
            linux_dmabuf_buffer_set_user_data(piVar15[3],0);
          }
          if (piVar15[4] != 0) {
            gbm_buffer_backend_set_user_data(piVar15[4],0);
          }
          (**(code **)(iVar20 + 0x68))(*(undefined4 *)(iVar20 + 0x38),piVar15[1]);
          wl_list_remove(piVar15 + 5);
          free(piVar15);
          iVar3 = *(int *)((int)pvVar13 + 0x54);
          *puVar12 = 0;
          if (iVar3 <= iVar11 + 1) goto LAB_0001549c;
        }
        else {
          *puVar12 = 0;
          if (iVar3 <= iVar11 + 1) goto LAB_0001549c;
        }
        iVar11 = iVar11 + 1;
        puVar12 = puVar12 + 1;
        piVar15 = (int *)*puVar12;
        iVar18 = piVar15[2];
        iVar20 = *piVar15;
      } while (0 < iVar18);
    }
LAB_0001541c:
                    // WARNING: Subroutine does not return
    __assert_fail("image->refcount > 0","../src/gl-renderer.c",0x12d,"egl_image_unref");
  }
  pwVar1 = (wl_shm_buffer *)wl_shm_buffer_get(buffer->resource);
  if (pwVar1 == (wl_shm_buffer *)0x0) {
    iVar3 = (*pwVar17[3].flush_damage)((weston_surface *)pwVar17[1].surface_set_color);
    if (iVar3 == 0) {
      dmabuf = (linux_dmabuf_buffer *)linux_dmabuf_buffer_get(buffer->resource);
      if (dmabuf == (linux_dmabuf_buffer *)0x0) {
        gbmbuf = (gbm_buffer *)gbm_buffer_get(buffer->resource);
        if (gbmbuf == (gbm_buffer *)0x0) {
          weston_log("unhandled buffer type!\n");
          weston_buffer_reference((int)pvVar13 + 0x58,0);
          *(undefined4 *)((int)pvVar13 + 0x68) = 0;
          *(undefined4 *)((int)pvVar13 + 0x74) = 1;
          return;
        }
        pvVar13 = es->renderer_state;
        gr = (gl_renderer *)es->compositor->renderer;
        if ((pvVar13 == (void *)0x0) && (pvVar13 = calloc(1,0x94), pvVar13 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar13 + 0x6c) = 1;
          *(undefined4 *)((int)pvVar13 + 0x74) = 1;
          *(weston_surface **)((int)pvVar13 + 0x78) = es;
          pixman_region32_init((int)pvVar13 + 0x28);
          pwVar7 = (es->destroy_signal).listener_list.prev;
          es->renderer_state = pvVar13;
          *(code **)((int)pvVar13 + 0x84) = surface_state_handle_surface_destroy;
          wl_list_insert(pwVar7,(int)pvVar13 + 0x7c);
          *(code **)((int)pvVar13 + 0x90) = surface_state_handle_renderer_destroy;
          wl_list_insert((gr->destroy_signal).listener_list.prev,(int)pvVar13 + 0x88);
          pwVar9 = (es->buffer_ref).buffer;
          if (pwVar9 != (weston_buffer *)0x0) {
            gl_renderer_attach(es,pwVar9);
            gl_renderer_flush_damage(es);
          }
          pvVar13 = es->renderer_state;
        }
        uVar16 = gbmbuf->height;
        uVar10 = gbmbuf->flags;
        buffer->width = gbmbuf->width;
        buffer->height = uVar16;
        buffer->y_inverted = uVar10 & 1;
        gbm_perform(0x23,gbmbuf->bo);
        if ((gbmbuf->format == 0x3231564e) && (iVar3 = 0, 0 < *(int *)((int)pvVar13 + 0x54))) {
          puVar12 = (undefined4 *)((int)pvVar13 + 0x40);
          do {
            puVar12 = puVar12 + 1;
            iVar3 = iVar3 + 1;
            egl_image_unref((egl_image *)*puVar12);
          } while (iVar3 < *(int *)((int)pvVar13 + 0x54));
        }
        *(undefined4 *)((int)pvVar13 + 0x54) = 0;
        if (gbmbuf->num_planes < 2) {
          pgVar6 = &gr->texture_shader_rgba;
          uVar4 = 0xde1;
        }
        else {
          pgVar6 = &gr->texture_shader_egl_external;
          uVar4 = 0x8d65;
        }
        *(gl_shader **)((int)pvVar13 + 0x10) = pgVar6;
        *(undefined4 *)((int)pvVar13 + 0x50) = uVar4;
        peVar8 = (egl_image *)gbm_buffer_backend_get_user_data(gbmbuf);
        uVar16 = gbmbuf->format;
        *(egl_image **)((int)pvVar13 + 0x44) = peVar8;
        if (uVar16 != 0x3231564e) {
          return;
        }
        if ((peVar8 != (egl_image *)0x0) && (iVar3 = egl_image_unref(peVar8), iVar3 != 0)) {
                    // WARNING: Subroutine does not return
          __assert_fail("ret == 0","../src/gl-renderer.c",0x7bb,"gl_renderer_attach_gbm_buffer");
        }
        gbm_perform(0x23,gbmbuf->bo);
        if (gbmbuf->format == 0x30313050 || gbmbuf->format == 0x41323151) {
          peVar8 = (egl_image *)0x0;
        }
        else {
          peVar8 = import_gbm_buffer(gr,gbmbuf);
        }
        *(egl_image **)((int)pvVar13 + 0x44) = peVar8;
        if (peVar8 == (egl_image *)0x0) {
          gbm_buffer_send_server_error(gbmbuf,"EGL gbmbuf import failed");
          return;
        }
        iVar3 = *(int *)((int)pvVar13 + 0x20);
        *(undefined4 *)((int)pvVar13 + 0x54) = 1;
        if (iVar3 < 1) {
          puVar12 = (undefined4 *)((int)pvVar13 + (iVar3 + 5) * 4);
          do {
            glGenTextures(1,puVar12);
            iVar3 = iVar3 + 1;
            glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),*puVar12);
            glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2802,0x812f);
            glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2803,0x812f);
            puVar12 = puVar12 + 1;
          } while (iVar3 != 1);
          *(undefined4 *)((int)pvVar13 + 0x20) = 1;
          glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),0);
        }
      }
      else {
        pvVar13 = es->renderer_state;
        gr = (gl_renderer *)es->compositor->renderer;
        if ((pvVar13 == (void *)0x0) && (pvVar13 = calloc(1,0x94), pvVar13 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar13 + 0x6c) = 1;
          *(undefined4 *)((int)pvVar13 + 0x74) = 1;
          *(weston_surface **)((int)pvVar13 + 0x78) = es;
          pixman_region32_init((int)pvVar13 + 0x28);
          pwVar7 = (es->destroy_signal).listener_list.prev;
          es->renderer_state = pvVar13;
          *(code **)((int)pvVar13 + 0x84) = surface_state_handle_surface_destroy;
          wl_list_insert(pwVar7,(int)pvVar13 + 0x7c);
          *(code **)((int)pvVar13 + 0x90) = surface_state_handle_renderer_destroy;
          wl_list_insert((gr->destroy_signal).listener_list.prev,(int)pvVar13 + 0x88);
          pwVar9 = (es->buffer_ref).buffer;
          if (pwVar9 != (weston_buffer *)0x0) {
            gl_renderer_attach(es,pwVar9);
            gl_renderer_flush_damage(es);
          }
          pvVar13 = es->renderer_state;
        }
        if (gr->has_dmabuf_import == 0) {
          linux_dmabuf_buffer_send_server_error(dmabuf,"EGL dmabuf import not supported");
          return;
        }
        iVar3 = *(int *)((int)pvVar13 + 0x54);
        iVar2 = dmabuf->height;
        uVar10 = dmabuf->flags;
        buffer->width = dmabuf->width;
        buffer->height = iVar2;
        buffer->y_inverted = uVar10 & 1;
        if (0 < iVar3) {
          piVar15 = *(int **)((int)pvVar13 + 0x44);
          iVar18 = piVar15[2];
          iVar20 = *piVar15;
          if (0 < iVar18) {
            puVar12 = (undefined4 *)((int)pvVar13 + 0x44);
            iVar11 = 0;
            do {
              piVar15[2] = iVar18 + -1;
              if (iVar18 + -1 == 0) {
                if (piVar15[3] != 0) {
                  linux_dmabuf_buffer_set_user_data(piVar15[3],0);
                }
                if (piVar15[4] != 0) {
                  gbm_buffer_backend_set_user_data(piVar15[4],0);
                }
                (**(code **)(iVar20 + 0x68))(*(undefined4 *)(iVar20 + 0x38),piVar15[1]);
                wl_list_remove(piVar15 + 5);
                free(piVar15);
                iVar3 = *(int *)((int)pvVar13 + 0x54);
              }
              iVar11 = iVar11 + 1;
              if (iVar3 <= iVar11) goto LAB_00015c4c;
              puVar12 = puVar12 + 1;
              piVar15 = (int *)*puVar12;
              iVar18 = piVar15[2];
              iVar20 = *piVar15;
            } while (0 < iVar18);
          }
          goto LAB_0001541c;
        }
LAB_00015c4c:
        *(undefined4 *)((int)pvVar13 + 0x54) = 0;
        if (dmabuf->n_planes < 2) {
          pgVar6 = &gr->texture_shader_rgba;
          uVar4 = 0xde1;
        }
        else {
          pgVar6 = &gr->texture_shader_egl_external;
          uVar4 = 0x8d65;
        }
        *(gl_shader **)((int)pvVar13 + 0x10) = pgVar6;
        *(undefined4 *)((int)pvVar13 + 0x50) = uVar4;
        peVar8 = (egl_image *)linux_dmabuf_buffer_get_user_data(dmabuf);
        *(egl_image **)((int)pvVar13 + 0x44) = peVar8;
        if ((peVar8 != (egl_image *)0x0) && (iVar3 = egl_image_unref(peVar8), iVar3 != 0)) {
                    // WARNING: Subroutine does not return
          __assert_fail("ret == 0","../src/gl-renderer.c",0x772,"gl_renderer_attach_dmabuf");
        }
        iVar3 = linux_dmabuf_buffer_get_user_data(dmabuf);
        if (iVar3 == 0) {
          peVar8 = import_dmabuf(gr,dmabuf);
          *(egl_image **)((int)pvVar13 + 0x44) = peVar8;
          if (peVar8 == (egl_image *)0x0) {
            linux_dmabuf_buffer_send_server_error(dmabuf,"EGL dmabuf import failed");
            return;
          }
        }
        else {
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
          *(int *)((int)pvVar13 + 0x44) = iVar3;
        }
        iVar3 = *(int *)((int)pvVar13 + 0x20);
        *(undefined4 *)((int)pvVar13 + 0x54) = 1;
        if (iVar3 < 1) {
          puVar12 = (undefined4 *)((int)pvVar13 + (iVar3 + 5) * 4);
          do {
            glGenTextures(1,puVar12);
            iVar3 = iVar3 + 1;
            glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),*puVar12);
            glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2802,0x812f);
            glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2803,0x812f);
            puVar12 = puVar12 + 1;
          } while (iVar3 != 1);
          *(undefined4 *)((int)pvVar13 + 0x20) = 1;
          glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),0);
        }
      }
      glActiveTexture(0x84c0);
      glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),*(undefined4 *)((int)pvVar13 + 0x14));
      (*gr->image_target_texture_2d)
                (*(GLenum *)((int)pvVar13 + 0x50),
                 *(GLeglImageOES *)(*(int *)((int)pvVar13 + 0x44) + 4));
      iVar2 = buffer->width;
      iVar19 = buffer->height;
    }
    else {
      pvVar13 = es->renderer_state;
      pwVar17 = es->compositor->renderer;
      if ((pvVar13 == (void *)0x0) && (pvVar13 = calloc(1,0x94), pvVar13 != (void *)0x0)) {
        *(undefined4 *)((int)pvVar13 + 0x6c) = 1;
        *(undefined4 *)((int)pvVar13 + 0x74) = 1;
        *(weston_surface **)((int)pvVar13 + 0x78) = es;
        pixman_region32_init((int)pvVar13 + 0x28);
        es->renderer_state = pvVar13;
        pwVar7 = (es->destroy_signal).listener_list.prev;
        *(code **)((int)pvVar13 + 0x84) = surface_state_handle_surface_destroy;
        wl_list_insert(pwVar7,(int)pvVar13 + 0x7c);
        *(code **)((int)pvVar13 + 0x90) = surface_state_handle_renderer_destroy;
        wl_list_insert(pwVar17[0xd].repaint_output,(int)pvVar13 + 0x88);
        pwVar9 = (es->buffer_ref).buffer;
        if (pwVar9 != (weston_buffer *)0x0) {
          gl_renderer_attach(es,pwVar9);
          gl_renderer_flush_damage(es);
        }
        pvVar13 = es->renderer_state;
      }
      buffer->field_3 = (anon_union_4_2_5ca4fa70_for_weston_buffer_3)buffer->resource;
      (*pwVar17[3].flush_damage)((weston_surface *)pwVar17[1].surface_set_color);
      (*pwVar17[3].flush_damage)((weston_surface *)pwVar17[1].surface_set_color);
      (*pwVar17[3].flush_damage)((weston_surface *)pwVar17[1].surface_set_color);
      if (0 < *(int *)((int)pvVar13 + 0x54)) {
        puVar12 = (undefined4 *)((int)pvVar13 + 0x40);
        iVar3 = 0;
        do {
          puVar12 = puVar12 + 1;
          iVar3 = iVar3 + 1;
          egl_image_unref((egl_image *)*puVar12);
          iVar18 = *(int *)((int)pvVar13 + 0x54);
          *puVar12 = 0;
        } while (iVar3 < iVar18);
      }
      *(undefined4 *)((int)pvVar13 + 0x54) = 0;
      *(undefined4 *)((int)pvVar13 + 0x50) = 0xde1;
      switch(format) {
      case 0x31d7:
        iVar3 = 3;
        *(_func_void_weston_surface_ptr_int_ptr_int_ptr ***)((int)pvVar13 + 0x10) =
             &pwVar17[8].surface_get_content_size;
        break;
      case 0x31d8:
        iVar3 = 2;
        *(_func_void_weston_compositor_ptr ***)((int)pvVar13 + 0x10) = &pwVar17[7].destroy;
        break;
      case 0x31d9:
        iVar3 = 2;
        *(_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int ***)((int)pvVar13 + 0x10) =
             &pwVar17[9].surface_copy_content;
        break;
      case 0x31da:
        iVar3 = 1;
        *(undefined4 *)((int)pvVar13 + 0x50) = 0x8d65;
        *(_func_void_weston_surface_ptr_float_float_float_float ***)((int)pvVar13 + 0x10) =
             &pwVar17[6].surface_set_color;
        break;
      default:
        iVar3 = 1;
        *(_func_void_weston_surface_ptr ***)((int)pvVar13 + 0x10) = &pwVar17[4].flush_damage;
      }
      iVar18 = *(int *)((int)pvVar13 + 0x20);
      if (iVar18 < iVar3) {
        puVar12 = (undefined4 *)((int)pvVar13 + (iVar18 + 5) * 4);
        do {
          glGenTextures(1,puVar12);
          iVar18 = iVar18 + 1;
          glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),*puVar12);
          glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2802,0x812f);
          glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2803,0x812f);
          puVar12 = puVar12 + 1;
        } while (iVar3 != iVar18);
        *(int *)((int)pvVar13 + 0x20) = iVar3;
        glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),0);
      }
      puVar12 = (undefined4 *)((int)pvVar13 + 0x44);
      iVar18 = 0;
      do {
        __ptr = (undefined4 *)calloc(1,0x1c);
        wl_list_init(__ptr + 5);
        pwVar5 = (weston_compositor *)pwVar17[1].surface_set_color;
        *__ptr = pwVar17;
        __ptr[2] = 1;
        iVar20 = (*pwVar17[2].destroy)(pwVar5);
        __ptr[1] = iVar20;
        if (iVar20 == 0) {
          free(__ptr);
          *puVar12 = 0;
          weston_log("failed to create img for plane %d\n",iVar18);
        }
        else {
          iVar20 = *(int *)((int)pvVar13 + 0x54);
          *puVar12 = __ptr;
          *(int *)((int)pvVar13 + 0x54) = iVar20 + 1;
          glActiveTexture(iVar18 + 0x84c0);
          uVar22 = glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),puVar12[-0xc]);
          (*pwVar17[2].surface_set_color)
                    (*(weston_surface **)((int)pvVar13 + 0x50),(float)uVar22,
                     (float)((ulonglong)uVar22 >> 0x20),extraout_s2,extraout_s3);
        }
        iVar18 = iVar18 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar3 != iVar18);
      iVar2 = buffer->width;
      iVar19 = buffer->height;
    }
    iVar3 = buffer->y_inverted;
    *(int32_t *)((int)pvVar13 + 0x6c) = iVar2;
    *(int32_t *)((int)pvVar13 + 0x70) = iVar19;
    *(int *)((int)pvVar13 + 0x74) = iVar3;
    *(undefined4 *)((int)pvVar13 + 0x68) = 3;
    return;
  }
  pvVar13 = es->renderer_state;
  pwVar17 = es->compositor->renderer;
  if ((pvVar13 == (void *)0x0) && (pvVar13 = calloc(1,0x94), pvVar13 != (void *)0x0)) {
    *(undefined4 *)((int)pvVar13 + 0x6c) = 1;
    *(undefined4 *)((int)pvVar13 + 0x74) = 1;
    *(weston_surface **)((int)pvVar13 + 0x78) = es;
    pixman_region32_init((int)pvVar13 + 0x28);
    pwVar7 = (es->destroy_signal).listener_list.prev;
    es->renderer_state = pvVar13;
    *(code **)((int)pvVar13 + 0x84) = surface_state_handle_surface_destroy;
    wl_list_insert(pwVar7,(int)pvVar13 + 0x7c);
    *(code **)((int)pvVar13 + 0x90) = surface_state_handle_renderer_destroy;
    wl_list_insert(pwVar17[0xd].repaint_output,(int)pvVar13 + 0x88);
    pwVar9 = (es->buffer_ref).buffer;
    if (pwVar9 != (weston_buffer *)0x0) {
      gl_renderer_attach(es,pwVar9);
      gl_renderer_flush_damage(es);
    }
    pvVar13 = es->renderer_state;
  }
  (buffer->field_3).shm_buffer = pwVar1;
  iVar2 = wl_shm_buffer_get_width(pwVar1);
  buffer->width = iVar2;
  iVar2 = wl_shm_buffer_get_height(pwVar1);
  buffer->height = iVar2;
  iVar3 = wl_shm_buffer_get_format(pwVar1);
  if (iVar3 == 1) {
    pp_Var21 = &pwVar17[5].attach;
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 != 0x36314752) {
        uVar4 = wl_shm_buffer_get_format(pwVar1);
        weston_log("warning: unknown shm buffer format: %08x\n",uVar4);
        return;
      }
      *(_func_void_weston_surface_ptr_weston_buffer_ptr ***)((int)pvVar13 + 0x10) =
           &pwVar17[5].attach;
      iVar18 = 0x8363;
      iVar3 = wl_shm_buffer_get_stride(pwVar1);
      iVar20 = 0x1907;
      iVar3 = iVar3 / 2;
      goto LAB_00015300;
    }
    pp_Var21 = (_func_void_weston_surface_ptr_weston_buffer_ptr **)&pwVar17[4].flush_damage;
  }
  *(_func_void_weston_surface_ptr_weston_buffer_ptr ***)((int)pvVar13 + 0x10) = pp_Var21;
  iVar3 = wl_shm_buffer_get_stride(pwVar1);
  iVar18 = 0x1401;
  iVar20 = 0x80e1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  iVar3 = iVar3 >> 2;
LAB_00015300:
  iVar11 = buffer->height;
  if ((((*(int *)((int)pvVar13 + 0x6c) != iVar3) || (iVar11 != *(int *)((int)pvVar13 + 0x70))) ||
      (*(int *)((int)pvVar13 + 0x3c) != iVar20)) ||
     ((*(int *)((int)pvVar13 + 0x40) != iVar18 || (*(int *)((int)pvVar13 + 0x68) != 2)))) {
    iVar14 = *(int *)((int)pvVar13 + 0x20);
    *(int *)((int)pvVar13 + 0x6c) = iVar3;
    *(int *)((int)pvVar13 + 0x3c) = iVar20;
    *(int *)((int)pvVar13 + 0x70) = iVar11;
    *(int *)((int)pvVar13 + 0x40) = iVar18;
    *(weston_surface **)((int)pvVar13 + 0x78) = es;
    *(undefined4 *)((int)pvVar13 + 0x50) = 0xde1;
    *(undefined4 *)((int)pvVar13 + 0x68) = 2;
    *(undefined4 *)((int)pvVar13 + 0x24) = 1;
    *(undefined4 *)((int)pvVar13 + 0x74) = 1;
    if (iVar14 < 1) {
      puVar12 = (undefined4 *)((int)pvVar13 + (iVar14 + 5) * 4);
      do {
        glGenTextures(1,puVar12);
        iVar14 = iVar14 + 1;
        glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),*puVar12);
        glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2802,0x812f);
        glTexParameteri(*(undefined4 *)((int)pvVar13 + 0x50),0x2803,0x812f);
        puVar12 = puVar12 + 1;
      } while (iVar14 != 1);
      *(undefined4 *)((int)pvVar13 + 0x20) = 1;
      glBindTexture(*(undefined4 *)((int)pvVar13 + 0x50),0);
      return;
    }
  }
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_flush_damage(weston_surface *surface)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  weston_buffer *buffer;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  weston_renderer *pwVar10;
  wl_list *pwVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  wl_list *pwVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int n;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  pvVar7 = surface->renderer_state;
  pwVar10 = surface->compositor->renderer;
  if ((pvVar7 == (void *)0x0) && (pvVar7 = calloc(1,0x94), pvVar7 != (void *)0x0)) {
    *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
    *(undefined4 *)((int)pvVar7 + 0x74) = 1;
    *(weston_surface **)((int)pvVar7 + 0x78) = surface;
    pixman_region32_init((int)pvVar7 + 0x28);
    surface->renderer_state = pvVar7;
    pwVar11 = (surface->destroy_signal).listener_list.prev;
    *(code **)((int)pvVar7 + 0x84) = surface_state_handle_surface_destroy;
    wl_list_insert(pwVar11,(int)pvVar7 + 0x7c);
    *(code **)((int)pvVar7 + 0x90) = surface_state_handle_renderer_destroy;
    wl_list_insert(pwVar10[0xd].repaint_output,(int)pvVar7 + 0x88);
    buffer = (surface->buffer_ref).buffer;
    if (buffer != (weston_buffer *)0x0) {
      gl_renderer_attach(surface,buffer);
      gl_renderer_flush_damage(surface);
    }
    pvVar7 = surface->renderer_state;
  }
  iVar8 = (int)pvVar7 + 0x28;
  iVar9 = *(int *)((int)pvVar7 + 0x58);
  pixman_region32_union(iVar8,iVar8,&surface->damage);
  if (iVar9 != 0) {
    pwVar11 = (surface->views).next;
    if (&surface->views != pwVar11) {
      pwVar14 = pwVar11[4].next;
      while( true ) {
        if (&surface->compositor->primary_plane == (weston_plane *)pwVar14) {
          iVar3 = pixman_region32_not_empty(iVar8);
          if ((iVar3 != 0) || (*(int *)((int)pvVar7 + 0x24) != 0)) {
            glBindTexture(0xde1,*(undefined4 *)((int)pvVar7 + 0x14));
            if (pwVar10[2].import_gbm_buffer ==
                (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)0x0) {
              wl_shm_buffer_begin_access(*(undefined4 *)(iVar9 + 0x18));
              uVar6 = *(undefined4 *)((int)pvVar7 + 0x3c);
              uVar15 = *(undefined4 *)((int)pvVar7 + 0x6c);
              uVar13 = *(undefined4 *)(iVar9 + 0x20);
              uVar12 = *(undefined4 *)((int)pvVar7 + 0x40);
              uVar4 = wl_shm_buffer_get_data(*(undefined4 *)(iVar9 + 0x18));
              glTexImage2D(0xde1,0,uVar6,uVar15,uVar13,0,uVar6,uVar12,uVar4);
              wl_shm_buffer_end_access(*(undefined4 *)(iVar9 + 0x18));
            }
            else {
              glPixelStorei(0xcf2,*(undefined4 *)((int)pvVar7 + 0x6c));
              uVar4 = wl_shm_buffer_get_data(*(undefined4 *)(iVar9 + 0x18));
              if (*(int *)((int)pvVar7 + 0x24) == 0) {
                puVar5 = (undefined4 *)pixman_region32_rectangles(iVar8,&n);
                wl_shm_buffer_begin_access(*(undefined4 *)(iVar9 + 0x18));
                if (0 < n) {
                  iVar3 = 0;
                  do {
                    puVar16 = puVar5 + 2;
                    iVar3 = iVar3 + 1;
                    puVar17 = puVar5 + 3;
                    uVar6 = *puVar5;
                    puVar18 = puVar5 + 1;
                    puVar5 = puVar5 + 4;
                    weston_surface_to_buffer_rect
                              (&local_38,surface,uVar6,*puVar18,*puVar16,*puVar17);
                    iVar2 = local_34;
                    iVar1 = local_38;
                    glPixelStorei(0xcf4,local_38);
                    glPixelStorei(0xcf3,iVar2);
                    glTexSubImage2D(0xde1,0,iVar1,iVar2,local_30 - iVar1,local_2c - iVar2,
                                    *(undefined4 *)((int)pvVar7 + 0x3c),
                                    *(undefined4 *)((int)pvVar7 + 0x40),uVar4);
                  } while (iVar3 < n);
                }
                wl_shm_buffer_end_access(*(undefined4 *)(iVar9 + 0x18));
              }
              else {
                glPixelStorei(0xcf4,0);
                glPixelStorei(0xcf3,0);
                wl_shm_buffer_begin_access(*(undefined4 *)(iVar9 + 0x18));
                glTexImage2D(0xde1,0,*(undefined4 *)((int)pvVar7 + 0x3c),
                             *(undefined4 *)((int)pvVar7 + 0x6c),*(undefined4 *)(iVar9 + 0x20),0,
                             *(undefined4 *)((int)pvVar7 + 0x3c),*(undefined4 *)((int)pvVar7 + 0x40)
                             ,uVar4);
                wl_shm_buffer_end_access(*(undefined4 *)(iVar9 + 0x18));
              }
            }
          }
          pixman_region32_fini(iVar8);
          pixman_region32_init(iVar8);
          *(undefined4 *)((int)pvVar7 + 0x24) = 0;
          weston_buffer_reference((int)pvVar7 + 0x58,0);
          return;
        }
        pwVar11 = pwVar11->next;
        if (&surface->views == pwVar11) break;
        pwVar14 = pwVar11[4].next;
      }
    }
  }
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_surface_set_color
               (weston_surface *surface,float red,float green,float blue,float alpha)

{
  wl_list *pwVar1;
  weston_buffer *buffer;
  undefined8 *puVar2;
  weston_compositor *pwVar3;
  weston_renderer *pwVar4;
  
  puVar2 = (undefined8 *)surface->renderer_state;
  pwVar3 = surface->compositor;
  if (puVar2 == (undefined8 *)0x0) {
    pwVar4 = pwVar3->renderer;
    puVar2 = (undefined8 *)calloc(1,0x94);
    if (puVar2 == (undefined8 *)0x0) goto LAB_0001631c;
    *(undefined4 *)((int)puVar2 + 0x6c) = 1;
    *(undefined4 *)((int)puVar2 + 0x74) = 1;
    *(weston_surface **)(puVar2 + 0xf) = surface;
    pixman_region32_init(puVar2 + 5);
    surface->renderer_state = puVar2;
    pwVar1 = (surface->destroy_signal).listener_list.prev;
    *(code **)((int)puVar2 + 0x84) = surface_state_handle_surface_destroy;
    wl_list_insert(pwVar1,(int)puVar2 + 0x7c);
    *(code **)(puVar2 + 0x12) = surface_state_handle_renderer_destroy;
    wl_list_insert(pwVar4[0xd].repaint_output,puVar2 + 0x11);
    buffer = (surface->buffer_ref).buffer;
    if (buffer != (weston_buffer *)0x0) {
      gl_renderer_attach(surface,buffer);
      gl_renderer_flush_damage(surface);
    }
    pwVar3 = surface->compositor;
    puVar2 = (undefined8 *)surface->renderer_state;
  }
  pwVar4 = pwVar3->renderer;
LAB_0001631c:
  *(_func__Bool_weston_compositor_ptr_gbm_buffer_ptr ***)(puVar2 + 2) =
       &pwVar4[0xb].import_gbm_buffer;
  *(undefined4 *)(puVar2 + 0xd) = 1;
  *(undefined4 *)((int)puVar2 + 0x6c) = 1;
  *puVar2 = CONCAT44(green,red);
  puVar2[1] = CONCAT44(alpha,blue);
  *(undefined4 *)(puVar2 + 0xe) = 1;
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_surface_get_content_size(weston_surface *surface,int *width,int *height)

{
  wl_list *pwVar1;
  weston_buffer *buffer;
  void *pvVar2;
  int iVar3;
  weston_renderer *pwVar4;
  
  pvVar2 = surface->renderer_state;
  if (pvVar2 == (void *)0x0) {
    pwVar4 = surface->compositor->renderer;
    pvVar2 = calloc(1,0x94);
    if (pvVar2 != (void *)0x0) {
      *(undefined4 *)((int)pvVar2 + 0x6c) = 1;
      *(undefined4 *)((int)pvVar2 + 0x74) = 1;
      *(weston_surface **)((int)pvVar2 + 0x78) = surface;
      pixman_region32_init((int)pvVar2 + 0x28);
      surface->renderer_state = pvVar2;
      pwVar1 = (surface->destroy_signal).listener_list.prev;
      *(code **)((int)pvVar2 + 0x84) = surface_state_handle_surface_destroy;
      wl_list_insert(pwVar1,(int)pvVar2 + 0x7c);
      *(code **)((int)pvVar2 + 0x90) = surface_state_handle_renderer_destroy;
      wl_list_insert(pwVar4[0xd].repaint_output,(int)pvVar2 + 0x88);
      buffer = (surface->buffer_ref).buffer;
      if (buffer == (weston_buffer *)0x0) {
        pvVar2 = surface->renderer_state;
      }
      else {
        gl_renderer_attach(surface,buffer);
        gl_renderer_flush_damage(surface);
        pvVar2 = surface->renderer_state;
      }
    }
  }
  if (*(int *)((int)pvVar2 + 0x68) == 0) {
    *width = 0;
    iVar3 = 0;
  }
  else {
    *width = *(int *)((int)pvVar2 + 0x6c);
    iVar3 = *(int *)((int)pvVar2 + 0x70);
  }
  *height = iVar3;
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

int gl_renderer_surface_copy_content
              (weston_surface *surface,void *target,size_t size,int src_x,int src_y,int width,
              int height)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  wl_list *pwVar4;
  weston_buffer *pwVar5;
  GLfloat *pGVar6;
  float *unaff_r4;
  float fVar7;
  gl_shader *shader;
  weston_renderer *pwVar8;
  weston_renderer *pwVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  GLuint fbo;
  GLuint tex;
  
  pfVar11 = (float *)surface->renderer_state;
  if (pfVar11 != (float *)0x0) {
    unaff_r4 = pfVar11;
  }
  pwVar9 = surface->compositor->renderer;
  if (pfVar11 == (float *)0x0) {
    pvVar3 = calloc(1,0x94);
    pwVar8 = pwVar9;
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)((int)pvVar3 + 0x6c) = 1;
      *(undefined4 *)((int)pvVar3 + 0x74) = 1;
      *(weston_surface **)((int)pvVar3 + 0x78) = surface;
      pixman_region32_init((int)pvVar3 + 0x28);
      surface->renderer_state = pvVar3;
      pwVar4 = (surface->destroy_signal).listener_list.prev;
      *(code **)((int)pvVar3 + 0x84) = surface_state_handle_surface_destroy;
      wl_list_insert(pwVar4,(int)pvVar3 + 0x7c);
      *(code **)((int)pvVar3 + 0x90) = surface_state_handle_renderer_destroy;
      wl_list_insert(pwVar9[0xd].repaint_output,(int)pvVar3 + 0x88);
      pwVar5 = (surface->buffer_ref).buffer;
      if (pwVar5 != (weston_buffer *)0x0) {
        gl_renderer_attach(surface,pwVar5);
        gl_renderer_flush_damage(surface);
      }
      unaff_r4 = (float *)surface->renderer_state;
      pfVar11 = unaff_r4;
      if (unaff_r4 != (float *)0x0) goto LAB_00016508;
      pwVar8 = surface->compositor->renderer;
    }
    unaff_r4 = (float *)calloc(1,0x94);
    if (unaff_r4 != (float *)0x0) {
      unaff_r4[0x1b] = 1.4013e-45;
      unaff_r4[0x1d] = 1.4013e-45;
      unaff_r4[0x1e] = (float)surface;
      pixman_region32_init(unaff_r4 + 10);
      surface->renderer_state = unaff_r4;
      pwVar4 = (surface->destroy_signal).listener_list.prev;
      unaff_r4[0x21] = (float)surface_state_handle_surface_destroy;
      wl_list_insert(pwVar4,unaff_r4 + 0x1f);
      unaff_r4[0x24] = (float)surface_state_handle_renderer_destroy;
      wl_list_insert(pwVar8[0xd].repaint_output,unaff_r4 + 0x22);
      pwVar5 = (surface->buffer_ref).buffer;
      if (pwVar5 == (weston_buffer *)0x0) {
        unaff_r4 = (float *)0x0;
        pfVar11 = (float *)surface->renderer_state;
        goto LAB_00016508;
      }
      unaff_r4 = (float *)0x0;
      gl_renderer_attach(surface,pwVar5);
      gl_renderer_flush_damage(surface);
    }
    pfVar11 = (float *)surface->renderer_state;
  }
LAB_00016508:
  fVar12 = unaff_r4[0x1a];
  if (pfVar11[0x1a] == 0.0) {
    fVar7 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar10 = pfVar11[0x1b];
    fVar7 = pfVar11[0x1c];
  }
  if (fVar12 != 1.4013e-45) {
    if (fVar12 == 0.0) {
      iVar1 = -1;
    }
    else {
      if (fVar12 == 2.8026e-45) {
        gl_renderer_flush_damage(surface);
      }
      glGenTextures(1,&tex);
      glBindTexture(0xde1,tex);
      glTexImage2D(0xde1,0,0x1908,fVar10,fVar7,0,0x1908,0x1401,0);
      glBindTexture(0xde1,0);
      glGenFramebuffers(1,&fbo);
      glBindFramebuffer(0x8d40,fbo);
      glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,tex,0);
      iVar1 = glCheckFramebufferStatus(0x8d40);
      if (iVar1 == 0x8cd5) {
        glViewport(0,0,fVar10,fVar7);
        glDisable(0xbe2);
        shader = (gl_shader *)unaff_r4[4];
        if ((shader->program == 0) &&
           (iVar1 = shader_init(shader,(gl_renderer *)(pwVar9 + 1),shader->vertex_source,
                                shader->fragment_source), iVar1 < 0)) {
          weston_log("warning: failed to compile shader\n");
        }
        if (shader != (gl_shader *)pwVar9[0xd].read_pixels) {
          glUseProgram(shader->program);
          pwVar9[0xd].read_pixels =
               (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                *)shader;
        }
        if (unaff_r4[0x1d] == 0.0) {
          pGVar6 = gl_renderer_surface_copy_content::projmat_yinvert;
        }
        else {
          pGVar6 = gl_renderer_surface_copy_content::projmat_normal;
        }
        glUniformMatrix4fv(*(undefined4 *)((int)unaff_r4[4] + 0xc),1,0,pGVar6);
        glUniform1f(0x3f800000,*(undefined4 *)((int)unaff_r4[4] + 0x1c));
        if (0 < (int)unaff_r4[8]) {
          pfVar11 = unaff_r4 + 4;
          iVar1 = 0;
          do {
            glUniform1i(*(undefined4 *)((int)unaff_r4[4] + (iVar1 + 4) * 4),iVar1);
            iVar2 = iVar1 + 0x84c0;
            iVar1 = iVar1 + 1;
            glActiveTexture(iVar2);
            pfVar11 = pfVar11 + 1;
            glBindTexture(unaff_r4[0x14],*pfVar11);
            glTexParameteri(unaff_r4[0x14],0x2801,0x2600);
            glTexParameteri(unaff_r4[0x14],0x2800,0x2600);
          } while (iVar1 < (int)unaff_r4[8]);
        }
        glVertexAttribPointer(0,2,0x1406,0,0,gl_renderer_surface_copy_content::verts);
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(1,2,0x1406,0,0,gl_renderer_surface_copy_content::verts);
        glEnableVertexAttribArray(1);
        glDrawArrays(6,0,4);
        glDisableVertexAttribArray(1);
        glDisableVertexAttribArray(0);
        glPixelStorei(0xd05,4);
        glReadPixels(src_x,src_y,width,height,0x1908,0x1401,target);
        glDeleteFramebuffers(1,&fbo);
        glDeleteTextures(1,&tex);
        iVar1 = 0;
      }
      else {
        weston_log("%s: fbo error: %#x\n","gl_renderer_surface_copy_content",iVar1);
        glDeleteFramebuffers(1,&fbo);
        glDeleteTextures(1,&tex);
        iVar1 = -1;
      }
    }
    return iVar1;
  }
  fVar12 = roundf(*unaff_r4 * 255.0);
  fVar10 = roundf(unaff_r4[1] * 255.0);
  fVar7 = roundf(unaff_r4[2] * 255.0);
  fVar13 = roundf(unaff_r4[3] * 255.0);
  *(uint *)target =
       ((uint)(0.0 < fVar7) * (int)fVar7 & 0xff) << 0x10 |
       (uint)(0.0 < fVar13) * (int)fVar13 * 0x1000000 | (uint)(0.0 < fVar12) * (int)fVar12 & 0xff |
       ((uint)(0.0 < fVar10) * (int)fVar10 & 0xff) << 8;
  return 0;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void repaint_region(weston_view *ev,pixman_region32_t *region,pixman_region32_t *surf_region)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short *psVar3;
  undefined1 auVar4 [12];
  short sVar5;
  short sVar6;
  float *pfVar7;
  bool bVar8;
  weston_renderer *pwVar9;
  int *piVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  short *__ptr;
  uint uVar14;
  short *psVar15;
  weston_buffer *buffer;
  short *psVar16;
  int *piVar17;
  uint uVar18;
  weston_surface *pwVar19;
  polygon8 *ppVar20;
  _func_void_weston_surface_ptr_weston_buffer_ptr *p_Var21;
  code *pcVar22;
  polygon8 *ppVar23;
  float *pfVar24;
  _func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
  *p_Var25;
  int *piVar26;
  int iVar27;
  float *pfVar28;
  int iVar29;
  weston_renderer *pwVar30;
  void *pvVar31;
  bool bVar32;
  short *psVar33;
  short *psVar34;
  longlong lVar35;
  int iVar36;
  GLfloat GVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  undefined1 in_q6 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 in_q7 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint local_160;
  int local_154;
  int *local_150;
  int local_14c;
  int local_140;
  int local_13c;
  int *local_12c;
  int nsurf;
  int raw_nrects;
  GLfloat sx;
  GLfloat sy;
  GLfloat ex [8];
  GLfloat ey [8];
  GLfloat bx;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  GLfloat by;
  float local_90 [7];
  float local_74;
  float local_70 [7];
  int local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  
  pwVar19 = ev->surface;
  uStack_4c = in_q6._0_8_;
  uStack_44 = in_q6._8_8_;
  uStack_3c = in_q7._0_8_;
  uStack_34 = in_q7._8_8_;
  pvVar31 = pwVar19->renderer_state;
  pwVar9 = pwVar19->compositor->renderer;
  pwVar30 = pwVar9;
  if ((pvVar31 == (void *)0x0) && (pvVar31 = calloc(1,0x94), pvVar31 != (void *)0x0)) {
    *(undefined4 *)((int)pvVar31 + 0x6c) = 1;
    *(undefined4 *)((int)pvVar31 + 0x74) = 1;
    *(weston_surface **)((int)pvVar31 + 0x78) = pwVar19;
    pixman_region32_init((int)pvVar31 + 0x28);
    pwVar19->renderer_state = pvVar31;
    *(code **)((int)pvVar31 + 0x84) = surface_state_handle_surface_destroy;
    wl_list_insert((pwVar19->destroy_signal).listener_list.prev,(int)pvVar31 + 0x7c);
    *(code **)((int)pvVar31 + 0x90) = surface_state_handle_renderer_destroy;
    wl_list_insert(pwVar9[0xd].repaint_output,(int)pvVar31 + 0x88);
    buffer = (pwVar19->buffer_ref).buffer;
    if (buffer != (weston_buffer *)0x0) {
      gl_renderer_attach(pwVar19,buffer);
      gl_renderer_flush_damage(pwVar19);
    }
    pvVar31 = pwVar19->renderer_state;
    pwVar30 = ev->surface->compositor->renderer;
  }
  piVar10 = (int *)pixman_region32_rectangles(region,&raw_nrects);
  iVar11 = pixman_region32_rectangles(surf_region,&nsurf);
  local_13c = raw_nrects;
  if (raw_nrects < 4) {
    bVar8 = false;
    local_12c = piVar10;
  }
  else {
    local_13c = 1;
    local_12c = (int *)malloc(raw_nrects * 0x10);
    piVar26 = piVar10 + raw_nrects * 4 + -4;
    iVar13 = piVar10[1];
    iVar36 = piVar10[2];
    iVar39 = piVar10[3];
    *local_12c = *piVar10;
    local_12c[1] = iVar13;
    local_12c[2] = iVar36;
    local_12c[3] = iVar39;
    do {
      iVar13 = 0;
      piVar17 = local_12c;
      do {
        iVar36 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        if (((local_12c[iVar36] == piVar10[4]) && (iVar36 = piVar10[6], iVar36 == piVar17[2])) &&
           (piVar10[5] == piVar17[3])) {
          iVar13 = piVar10[7];
          *piVar17 = piVar10[4];
          piVar17[2] = iVar36;
          piVar17[3] = iVar13;
          goto LAB_000172e8;
        }
        piVar17 = piVar17 + 4;
      } while (local_13c != iVar13);
      piVar17 = local_12c + local_13c * 4;
      local_13c = local_13c + 1;
      iVar13 = piVar10[5];
      iVar36 = piVar10[6];
      iVar39 = piVar10[7];
      *piVar17 = piVar10[4];
      piVar17[1] = iVar13;
      piVar17[2] = iVar36;
      piVar17[3] = iVar39;
LAB_000172e8:
      piVar10 = piVar10 + 4;
    } while (piVar10 != piVar26);
    bVar8 = true;
  }
  pfVar12 = (float *)wl_array_add(&pwVar30[1].import_dmabuf,nsurf * local_13c * 0x80);
  iVar13 = wl_array_add(&pwVar30[2].repaint_output,nsurf * local_13c * 4);
  iVar39 = *(int *)((int)pvVar31 + 0x6c);
  iVar36 = *(int *)((int)pvVar31 + 0x70);
  if (local_13c < 1) {
    if (!bVar8) {
      p_Var25 = pwVar9[2].read_pixels;
      glVertexAttribPointer(0,2,0x1406,0,0x10,p_Var25);
      glEnableVertexAttribArray(0);
      glVertexAttribPointer(1,2,0x1406,0,0x10,p_Var25 + 8);
      glEnableVertexAttribArray(1);
      goto LAB_00017124;
    }
    local_14c = 0;
LAB_000171b8:
    free(local_12c);
  }
  else {
    local_150 = local_12c + 1;
    local_14c = 0;
    local_140 = 0;
    iVar27 = nsurf;
    do {
      if (0 < iVar27) {
        local_154 = 0;
        piVar10 = (int *)(iVar11 + 8);
        do {
          uVar46 = in_q6._8_8_;
          memset((polygon8 *)&by,0,0x44);
          local_54 = 4;
          iVar27 = 0;
          fVar38 = (float)local_150[1];
          local_90[0] = (float)(longlong)*piVar10;
          local_90[1] = (float)(longlong)*piVar10;
          local_74 = (float)(longlong)piVar10[-1];
          auVar4._4_8_ = uVar46;
          auVar4._0_4_ = local_74;
          auVar41._0_8_ = auVar4._0_8_ << 0x20;
          by = (float)(longlong)piVar10[-2];
          local_90[2] = (float)(longlong)piVar10[-2];
          auVar41._12_4_ = (undefined4)((ulonglong)uVar46 >> 0x20);
          auVar41._8_4_ = (float)(longlong)piVar10[1];
          local_70[0] = local_74;
          local_70[1] = auVar41._8_4_;
          local_70[2] = auVar41._8_4_;
          local_ac = (float)(longlong)local_150[-1];
          local_a8 = (float)(longlong)*local_150;
          local_a4 = (float)(longlong)(int)fVar38;
          local_a0 = (float)(longlong)local_150[2];
          ppVar20 = (polygon8 *)&by;
          do {
            iVar27 = iVar27 + 1;
            weston_view_to_global_float(ppVar20->x[0],ev,ppVar20,ppVar20->y);
            ppVar20 = (polygon8 *)(ppVar20->x + 1);
          } while (iVar27 < local_54);
          in_q6._0_12_ = auVar41._0_12_;
          in_q6._12_4_ = by;
          if (local_54 < 2) {
            in_q7._4_4_ = local_74;
            in_q7._0_4_ = local_74;
            in_q7._8_4_ = by;
          }
          else {
            in_q7._4_4_ = local_74;
            in_q7._0_4_ = local_74;
            in_q7._8_4_ = by;
            ppVar20 = (polygon8 *)&by;
            do {
              ppVar23 = (polygon8 *)(ppVar20->x + 1);
              auVar42 = in_q7._0_12_;
              auVar43._12_4_ = ppVar23->x[0];
              fVar40 = ppVar20->y[1];
              if (auVar43._12_4_ < in_q7._8_4_) {
                auVar42._0_8_ = in_q7._0_8_;
                auVar42._8_4_ = auVar43._12_4_;
              }
              auVar43._0_12_ = auVar42;
              if (in_q6._12_4_ <= auVar43._12_4_) {
                in_q6._12_4_ = auVar43._12_4_;
              }
              in_q7 = auVar43;
              if (fVar40 < auVar42._0_4_) {
                in_q7._4_12_ = auVar43._4_12_;
                in_q7._0_4_ = fVar40;
              }
              if (auVar42._4_4_ <= fVar40) {
                in_q7._4_4_ = fVar40;
              }
              ppVar20 = ppVar23;
            } while (ppVar23 != (polygon8 *)(((polygon8 *)&by)->x + local_54 + -1));
          }
          if (((in_q7._8_4_ < local_a4) &&
              (local_ac < in_q6._12_4_ != (NAN(local_ac) || NAN(in_q6._12_4_)))) &&
             ((in_q7._0_4_ < local_a0 &&
              (local_a8 < in_q7._4_4_ != (NAN(local_a8) || NAN(in_q7._4_4_)))))) {
            if ((ev->transform).enabled == 0) {
              iVar27 = clip_simple((clip_context *)&bx,(polygon8 *)&by,ex,ey);
            }
            else {
              iVar27 = clip_transformed((clip_context *)&bx,(polygon8 *)&by,ex,ey);
            }
            if (2 < iVar27) {
              iVar29 = 0;
              pfVar24 = ey;
              pfVar28 = ex;
              pfVar7 = pfVar12;
              do {
                pfVar12 = pfVar7 + 4;
                iVar29 = iVar29 + 1;
                weston_view_from_global_float(*pfVar28,ev,&sx,&sy);
                pwVar19 = ev->surface;
                *pfVar7 = *pfVar28;
                pfVar7[1] = *pfVar24;
                weston_surface_to_buffer_float(sx,pwVar19,(clip_context *)&bx,(polygon8 *)&by);
                bVar32 = *(int *)((int)pvVar31 + 0x74) == 0;
                if (bVar32) {
                  fVar38 = *(float *)((int)pvVar31 + 0x70);
                }
                pfVar7[2] = bx * (float)(1.0 / (double)(longlong)iVar39);
                GVar37 = by;
                if (bVar32) {
                  fVar38 = (float)(longlong)(int)fVar38;
                  GVar37 = fVar38 - by;
                }
                pfVar7[3] = GVar37 * (float)(1.0 / (double)(longlong)iVar36);
                pfVar24 = pfVar24 + 1;
                pfVar28 = pfVar28 + 1;
                pfVar7 = pfVar12;
              } while (iVar29 < iVar27);
              *(int *)(iVar13 + local_14c * 4) = iVar27;
              local_14c = local_14c + 1;
            }
          }
          piVar10 = piVar10 + 4;
          local_154 = local_154 + 1;
          iVar27 = nsurf;
        } while (local_154 < nsurf);
      }
      local_140 = local_140 + 1;
      local_150 = local_150 + 4;
    } while (local_13c != local_140);
    if (bVar8) goto LAB_000171b8;
  }
  p_Var25 = pwVar9[2].read_pixels;
  p_Var21 = pwVar9[2].attach;
  glVertexAttribPointer(0,2,0x1406,0,0x10,p_Var25);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1,2,0x1406,0,0x10,p_Var25 + 8);
  glEnableVertexAttribArray(1);
  if (0 < local_14c) {
    iVar11 = 0;
    pcVar22 = p_Var21 + -4;
    iVar13 = 0;
    do {
      pcVar22 = pcVar22 + 4;
      glDrawArrays(6,iVar11,*(undefined4 *)pcVar22);
      if (pwVar9[1].repaint_output != (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x0) {
        iVar39 = *(int *)pcVar22;
        iVar36 = iVar39 + -1 + iVar39 + -2;
        pwVar30 = ev->surface->compositor->renderer;
        __ptr = (short *)malloc(iVar36 * 4);
        if (1 < iVar39) {
          sVar6 = (short)iVar11;
          uVar14 = (iVar39 - 9U >> 3) + 1;
          if (iVar39 - 2U < 7) {
            iVar27 = 1;
            psVar16 = __ptr;
LAB_00017160:
            do {
              sVar5 = (short)iVar27;
              iVar27 = iVar27 + 1;
              *psVar16 = sVar6;
              psVar16[1] = sVar6 + sVar5;
              psVar16 = psVar16 + 2;
            } while (iVar27 < iVar39);
          }
          else {
            auVar41 = SIMDExpandImmediate(0,0,8);
            auVar1._4_4_ = CONCAT22(sVar6,sVar6);
            auVar1._0_4_ = CONCAT22(sVar6,sVar6);
            auVar1._8_8_ = 0;
            auVar43 = SIMDExpandImmediate(0,0,4);
            auVar49._8_8_ = 0x400000003;
            auVar49._0_8_ = 0x200000001;
            uVar18 = 0;
            psVar16 = __ptr;
            do {
              auVar48 = VectorAdd(auVar49,auVar43,4);
              uVar18 = uVar18 + 1;
              uVar46 = VectorCopyNarrow(auVar49,4);
              uVar47 = VectorCopyNarrow(auVar48,4);
              auVar49 = VectorAdd(auVar49,auVar41,4);
              auVar48._8_8_ = uVar47;
              auVar48._0_8_ = uVar46;
              VectorAdd(auVar48,auVar1 & auVar1 << 0x40,2);
              psVar15 = (short *)0x380;
              psVar3 = (short *)0x390;
              lVar35 = 4;
              psVar33 = psVar16;
              while( true ) {
                *psVar33 = *psVar15;
                psVar33[1] = *psVar3;
                psVar33 = psVar33 + 2;
                lVar35 = lVar35 + -1;
                if (lVar35 == 0) break;
                psVar15 = psVar15 + 1;
                psVar3 = psVar3 + 1;
              }
              psVar15 = (short *)0x388;
              psVar3 = (short *)0x398;
              lVar35 = 4;
              while( true ) {
                *psVar33 = *psVar15;
                psVar33[1] = *psVar3;
                psVar33 = psVar33 + 2;
                lVar35 = lVar35 + -1;
                if (lVar35 == 0) break;
                psVar15 = psVar15 + 1;
                psVar3 = psVar3 + 1;
              }
              psVar16 = psVar16 + 0x10;
            } while (uVar18 < uVar14);
            iVar27 = uVar14 * 8 + 1;
            psVar16 = __ptr + uVar14 * 0x10;
            if (iVar39 + -1 != uVar14 * 8) goto LAB_00017160;
          }
          psVar16 = __ptr + (iVar39 + 0x3fffffff) * 2;
          if (2 < iVar39) {
            uVar14 = (iVar39 - 10U >> 3) + 1;
            if (iVar39 - 3U < 7) {
              iVar27 = 2;
            }
            else {
              auVar41 = SIMDExpandImmediate(0,0,8);
              auVar2._4_4_ = CONCAT22(sVar6,sVar6);
              auVar2._0_4_ = CONCAT22(sVar6,sVar6);
              auVar2._8_8_ = 0;
              auVar43 = SIMDExpandImmediate(0,0,4);
              auVar1 = SIMDExpandImmediate(0,0xe,0xff);
              auVar45._8_8_ = 0x500000004;
              auVar45._0_8_ = 0x300000002;
              local_160 = 0;
              psVar15 = psVar16;
              do {
                auVar49 = VectorAdd(auVar45,auVar43,4);
                local_160 = local_160 + 1;
                auVar44._0_8_ = VectorCopyNarrow(auVar45,4);
                auVar44._8_8_ = VectorCopyNarrow(auVar49,4);
                auVar45 = VectorAdd(auVar45,auVar41,4);
                auVar49 = VectorAdd(auVar44,auVar2 & auVar2 << 0x40,2);
                VectorAdd(auVar49,auVar1,2);
                psVar3 = (short *)0x360;
                psVar33 = (short *)0x370;
                lVar35 = 4;
                psVar34 = psVar15;
                while( true ) {
                  *psVar34 = *psVar3;
                  psVar34[1] = *psVar33;
                  psVar34 = psVar34 + 2;
                  lVar35 = lVar35 + -1;
                  if (lVar35 == 0) break;
                  psVar3 = psVar3 + 1;
                  psVar33 = psVar33 + 1;
                }
                psVar3 = (short *)0x368;
                psVar33 = (short *)0x378;
                lVar35 = 4;
                while( true ) {
                  *psVar34 = *psVar3;
                  psVar34[1] = *psVar33;
                  psVar34 = psVar34 + 2;
                  lVar35 = lVar35 + -1;
                  if (lVar35 == 0) break;
                  psVar3 = psVar3 + 1;
                  psVar33 = psVar33 + 1;
                }
                psVar15 = psVar15 + 0x10;
              } while (local_160 < uVar14);
              iVar27 = uVar14 * 8 + 2;
              psVar16 = psVar16 + uVar14 * 0x10;
              if (iVar39 - 2U == uVar14 * 8) goto LAB_00017040;
            }
            do {
              sVar5 = (short)iVar27;
              iVar27 = iVar27 + 1;
              *psVar16 = sVar5 + sVar6 + -1;
              psVar16[1] = sVar6 + sVar5;
              psVar16 = psVar16 + 2;
            } while (iVar27 < iVar39);
          }
        }
LAB_00017040:
        glUseProgram(pwVar30[0xb].import_gbm_buffer);
        uVar14 = triangle_fan_debug::color_idx & 3;
        triangle_fan_debug::color_idx = triangle_fan_debug::color_idx + 1;
        glUniform4fv(pwVar30[0xc].surface_copy_content,1,triangle_fan_debug::color + uVar14);
        glDrawElements(1,iVar36 * 2,0x1403,__ptr);
        glUseProgram(*(undefined4 *)pwVar30[0xd].read_pixels);
        free(__ptr);
      }
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + *(int *)pcVar22;
    } while (iVar13 != local_14c);
  }
LAB_00017124:
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(0);
  pwVar9[1].import_dmabuf = (_func__Bool_weston_compositor_ptr_linux_dmabuf_buffer_ptr *)0x0;
  pwVar9[2].repaint_output = (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x0;
  return;
}



// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void repaint_views(weston_output *output,pixman_region32_t *damage)

{
  int iVar1;
  undefined4 *puVar2;
  weston_buffer *pwVar3;
  _func__Bool_weston_compositor_ptr_gbm_buffer_ptr *p_Var4;
  weston_compositor *pwVar5;
  weston_view *ev;
  int iVar6;
  void *pvVar7;
  _func_void_weston_surface_ptr_weston_buffer_ptr **pp_Var8;
  _func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int **pp_Var9;
  weston_surface *pwVar10;
  gl_shader *pgVar11;
  undefined4 uVar12;
  _func_void_weston_surface_ptr_float_float_float_float **pp_Var13;
  weston_compositor *pwVar14;
  weston_renderer *pwVar15;
  wl_list *pwVar16;
  undefined8 *puVar17;
  void *pvVar18;
  _func__Bool_weston_compositor_ptr_gbm_buffer_ptr **pp_Var19;
  wl_list *pwVar20;
  weston_renderer *pwVar21;
  void *local_84;
  pixman_region32_t r;
  pixman_region32_t repaint_1;
  pixman_region32_t repaint;
  pixman_region32_t surface_blend;
  
  pwVar5 = output->compositor;
  pwVar20 = &pwVar5->view_list;
  if (pwVar20 != pwVar20->prev) {
    ev = (weston_view *)&pwVar20->prev[-3].next;
    do {
      while (ev->plane == &pwVar5->primary_plane) {
        pwVar10 = ev->surface;
        pvVar7 = pwVar10->renderer_state;
        pwVar15 = pwVar10->compositor->renderer;
        if ((pvVar7 == (void *)0x0) && (pvVar7 = calloc(1,0x94), pvVar7 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
          *(undefined4 *)((int)pvVar7 + 0x74) = 1;
          *(weston_surface **)((int)pvVar7 + 0x78) = pwVar10;
          pixman_region32_init((int)pvVar7 + 0x28);
          pwVar10->renderer_state = pvVar7;
          *(code **)((int)pvVar7 + 0x84) = surface_state_handle_surface_destroy;
          wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)pvVar7 + 0x7c);
          *(code **)((int)pvVar7 + 0x90) = surface_state_handle_renderer_destroy;
          wl_list_insert(pwVar15[0xd].repaint_output,(int)pvVar7 + 0x88);
          pwVar3 = (pwVar10->buffer_ref).buffer;
          if (pwVar3 != (weston_buffer *)0x0) {
            gl_renderer_attach(pwVar10,pwVar3);
            gl_renderer_flush_damage(pwVar10);
          }
          pvVar7 = pwVar10->renderer_state;
        }
        if (*(int *)((int)pvVar7 + 0x10) == 0) goto LAB_00017428;
        pixman_region32_init(&repaint_1);
        pixman_region32_intersect(&repaint_1,&(ev->transform).boundingbox,damage);
        pixman_region32_subtract(&repaint_1,&repaint_1,&ev->clip);
        iVar1 = pixman_region32_not_empty(&repaint_1);
        if (iVar1 != 0) {
          glBlendFunc(0x302,0x303);
          if (pwVar15[1].repaint_output != (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x0
             ) {
            pp_Var19 = &pwVar15[0xb].import_gbm_buffer;
            if ((pwVar15[0xb].import_gbm_buffer ==
                 (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)0x0) &&
               (iVar1 = shader_init((gl_shader *)pp_Var19,(gl_renderer *)(pwVar15 + 1),
                                    (char *)pwVar15[0xc].import_dmabuf,
                                    (char *)pwVar15[0xc].import_gbm_buffer), iVar1 < 0)) {
              weston_log("warning: failed to compile shader\n");
            }
            if (pp_Var19 !=
                (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr **)pwVar15[0xd].read_pixels) {
              glUseProgram(pwVar15[0xb].import_gbm_buffer);
              pwVar15[0xd].read_pixels =
                   (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                    *)pp_Var19;
            }
            pwVar10 = ev->surface;
            pvVar18 = pwVar10->renderer_state;
            if (pvVar18 == (void *)0x0) {
              pwVar21 = pwVar10->compositor->renderer;
              pvVar18 = calloc(1,0x94);
              if (pvVar18 != (void *)0x0) {
                *(undefined4 *)((int)pvVar18 + 0x6c) = 1;
                *(undefined4 *)((int)pvVar18 + 0x74) = 1;
                *(weston_surface **)((int)pvVar18 + 0x78) = pwVar10;
                pixman_region32_init((int)pvVar18 + 0x28);
                pwVar10->renderer_state = pvVar18;
                *(code **)((int)pvVar18 + 0x84) = surface_state_handle_surface_destroy;
                wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)pvVar18 + 0x7c);
                *(code **)((int)pvVar18 + 0x90) = surface_state_handle_renderer_destroy;
                wl_list_insert(pwVar21[0xd].repaint_output,(int)pvVar18 + 0x88);
                pwVar3 = (pwVar10->buffer_ref).buffer;
                if (pwVar3 != (weston_buffer *)0x0) {
                  gl_renderer_attach(pwVar10,pwVar3);
                  gl_renderer_flush_damage(pwVar10);
                }
                pvVar18 = pwVar10->renderer_state;
              }
            }
            glUniformMatrix4fv(pwVar15[0xc].flush_damage,1,0,(int)output->renderer_state + 0x8c);
            glUniform4fv(pwVar15[0xc].surface_copy_content,1,pvVar18);
            glUniform1f(ev->alpha,pwVar15[0xc].surface_get_content_size);
            if (0 < *(int *)((int)pvVar18 + 0x20)) {
              pp_Var13 = (_func_void_weston_surface_ptr_float_float_float_float **)
                         &pwVar15[0xc].flush_damage;
              iVar1 = 0;
              do {
                pp_Var13 = pp_Var13 + 1;
                glUniform1i(*pp_Var13,iVar1);
                iVar1 = iVar1 + 1;
              } while (iVar1 < *(int *)((int)pvVar18 + 0x20));
            }
          }
          pgVar11 = *(gl_shader **)((int)pvVar7 + 0x10);
          if ((pgVar11->program == 0) &&
             (iVar1 = shader_init(pgVar11,(gl_renderer *)(pwVar15 + 1),pgVar11->vertex_source,
                                  pgVar11->fragment_source), iVar1 < 0)) {
            weston_log("warning: failed to compile shader\n");
          }
          if (pgVar11 != (gl_shader *)pwVar15[0xd].read_pixels) {
            glUseProgram(pgVar11->program);
            pwVar15[0xd].read_pixels =
                 (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                  *)pgVar11;
          }
          pwVar10 = ev->surface;
          iVar1 = *(int *)((int)pvVar7 + 0x10);
          pvVar18 = pwVar10->renderer_state;
          if (pvVar18 == (void *)0x0) {
            pwVar21 = pwVar10->compositor->renderer;
            pvVar18 = calloc(1,0x94);
            if (pvVar18 != (void *)0x0) {
              *(undefined4 *)((int)pvVar18 + 0x6c) = 1;
              *(undefined4 *)((int)pvVar18 + 0x74) = 1;
              *(weston_surface **)((int)pvVar18 + 0x78) = pwVar10;
              pixman_region32_init((int)pvVar18 + 0x28);
              pwVar10->renderer_state = pvVar18;
              *(code **)((int)pvVar18 + 0x84) = surface_state_handle_surface_destroy;
              wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)pvVar18 + 0x7c);
              *(code **)((int)pvVar18 + 0x90) = surface_state_handle_renderer_destroy;
              wl_list_insert(pwVar21[0xd].repaint_output,(int)pvVar18 + 0x88);
              pwVar3 = (pwVar10->buffer_ref).buffer;
              if (pwVar3 != (weston_buffer *)0x0) {
                gl_renderer_attach(pwVar10,pwVar3);
                gl_renderer_flush_damage(pwVar10);
              }
              pvVar18 = pwVar10->renderer_state;
            }
          }
          glUniformMatrix4fv(*(undefined4 *)(iVar1 + 0xc),1,0,(int)output->renderer_state + 0x8c);
          glUniform4fv(*(undefined4 *)(iVar1 + 0x20),1,pvVar18);
          glUniform1f(ev->alpha,*(undefined4 *)(iVar1 + 0x1c));
          if (0 < *(int *)((int)pvVar18 + 0x20)) {
            puVar2 = (undefined4 *)(iVar1 + 0xc);
            iVar1 = 0;
            do {
              puVar2 = puVar2 + 1;
              glUniform1i(*puVar2,iVar1);
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)((int)pvVar18 + 0x20));
          }
          if (((ev->transform).enabled == 0) && ((output->zoom).active == false)) {
            if (output->current_scale == (ev->surface->buffer_viewport).buffer.scale) {
              uVar12 = 0x2600;
            }
            else {
              uVar12 = 0x2601;
            }
          }
          else {
            uVar12 = 0x2601;
          }
          if (0 < *(int *)((int)pvVar7 + 0x20)) {
            puVar2 = (undefined4 *)((int)pvVar7 + 0x10);
            iVar1 = 0;
            do {
              iVar6 = iVar1 + 1;
              glActiveTexture(iVar1 + 0x84c0);
              puVar2 = puVar2 + 1;
              glBindTexture(*(undefined4 *)((int)pvVar7 + 0x50),*puVar2);
              glTexParameteri(*(undefined4 *)((int)pvVar7 + 0x50),0x2801,uVar12);
              glTexParameteri(*(undefined4 *)((int)pvVar7 + 0x50),0x2800,uVar12);
              iVar1 = iVar6;
            } while (iVar6 < *(int *)((int)pvVar7 + 0x20));
          }
          pixman_region32_init_rect(&surface_blend,0,0,ev->surface->width,ev->surface->height);
          if ((ev->geometry).scissor_enabled != false) {
            pixman_region32_intersect(&surface_blend,&surface_blend,&(ev->geometry).scissor);
          }
          pixman_region32_subtract(&surface_blend,&surface_blend,&ev->surface->opaque);
          pixman_region32_init(&repaint);
          if ((ev->geometry).scissor_enabled == false) {
            pixman_region32_copy(&repaint,&ev->surface->opaque);
          }
          else {
            pixman_region32_intersect(&repaint,&ev->surface->opaque,&(ev->geometry).scissor);
          }
          iVar1 = pixman_region32_not_empty(&repaint);
          if (iVar1 != 0) {
            if ((_func_void_weston_surface_ptr **)*(undefined1 **)((int)pvVar7 + 0x10) ==
                &pwVar15[4].flush_damage) {
              if ((pwVar15[5].attach == (_func_void_weston_surface_ptr_weston_buffer_ptr *)0x0) &&
                 (iVar1 = shader_init((gl_shader *)&pwVar15[5].attach,(gl_renderer *)(pwVar15 + 1),
                                      (char *)pwVar15[6].flush_damage,(char *)pwVar15[6].attach),
                 iVar1 < 0)) {
                weston_log("warning: failed to compile shader\n");
              }
              if (&pwVar15[5].attach !=
                  (_func_void_weston_surface_ptr_weston_buffer_ptr **)pwVar15[0xd].read_pixels) {
                glUseProgram(pwVar15[5].attach);
                pwVar15[0xd].read_pixels =
                     (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                      *)&pwVar15[5].attach;
              }
              pwVar10 = ev->surface;
              local_84 = pwVar10->renderer_state;
              if (local_84 == (void *)0x0) {
                pwVar21 = pwVar10->compositor->renderer;
                local_84 = calloc(1,0x94);
                if (local_84 != (void *)0x0) {
                  *(weston_surface **)((int)local_84 + 0x78) = pwVar10;
                  *(undefined4 *)((int)local_84 + 0x6c) = 1;
                  *(undefined4 *)((int)local_84 + 0x74) = 1;
                  pixman_region32_init();
                  pwVar10->renderer_state = local_84;
                  *(code **)((int)local_84 + 0x84) = surface_state_handle_surface_destroy;
                  wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)local_84 + 0x7c);
                  *(code **)((int)local_84 + 0x90) = surface_state_handle_renderer_destroy;
                  wl_list_insert(pwVar21[0xd].repaint_output,(int)local_84 + 0x88);
                  pwVar3 = (pwVar10->buffer_ref).buffer;
                  if (pwVar3 != (weston_buffer *)0x0) {
                    gl_renderer_attach(pwVar10,pwVar3);
                    gl_renderer_flush_damage(pwVar10);
                  }
                  local_84 = pwVar10->renderer_state;
                }
              }
              glUniformMatrix4fv(pwVar15[5].surface_get_content_size,1,0,
                                 (int)output->renderer_state + 0x8c);
              glUniform4fv(pwVar15[6].repaint_output,1,local_84);
              glUniform1f(ev->alpha,pwVar15[6].read_pixels);
              if (0 < *(int *)((int)local_84 + 0x20)) {
                pp_Var9 = (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int **)
                          &pwVar15[5].surface_get_content_size;
                iVar1 = 0;
                do {
                  pp_Var9 = pp_Var9 + 1;
                  glUniform1i(*pp_Var9,iVar1);
                  iVar1 = iVar1 + 1;
                } while (iVar1 < *(int *)((int)local_84 + 0x20));
              }
            }
            if (ev->alpha < 1.0) {
              glEnable(0xbe2);
            }
            else {
              glDisable(0xbe2);
            }
            repaint_region(ev,&repaint_1,&repaint);
          }
          iVar1 = pixman_region32_not_empty(&surface_blend);
          if (iVar1 != 0) {
            pgVar11 = *(gl_shader **)((int)pvVar7 + 0x10);
            if ((pgVar11->program == 0) &&
               (iVar1 = shader_init(pgVar11,(gl_renderer *)(pwVar15 + 1),pgVar11->vertex_source,
                                    pgVar11->fragment_source), iVar1 < 0)) {
              weston_log("warning: failed to compile shader\n");
            }
            if (pgVar11 != (gl_shader *)pwVar15[0xd].read_pixels) {
              glUseProgram(pgVar11->program);
              pwVar15[0xd].read_pixels =
                   (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                    *)pgVar11;
            }
            glEnable(0xbe2);
            repaint_region(ev,&repaint_1,&surface_blend);
          }
          pixman_region32_fini(&surface_blend);
          pixman_region32_fini(&repaint);
        }
        pixman_region32_fini(&repaint_1);
        pwVar16 = (ev->link).prev;
        ev = (weston_view *)&pwVar16[-3].next;
        if (pwVar20 == pwVar16) {
          return;
        }
      }
      pixman_region32_init_rect(&r,0,0,ev->surface->width,ev->surface->height);
      pixman_region32_subtract(&r,&r,&ev->surface->opaque);
      iVar1 = pixman_region32_not_empty(&r);
      if ((iVar1 == 0) && (ev->alpha == 1.0)) {
        pwVar10 = ev->surface;
        pvVar7 = pwVar10->renderer_state;
        pwVar15 = pwVar10->compositor->renderer;
        if ((pvVar7 == (void *)0x0) && (pvVar7 = calloc(1,0x94), pvVar7 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
          *(undefined4 *)((int)pvVar7 + 0x74) = 1;
          *(weston_surface **)((int)pvVar7 + 0x78) = pwVar10;
          pixman_region32_init((int)pvVar7 + 0x28);
          pwVar10->renderer_state = pvVar7;
          *(code **)((int)pvVar7 + 0x84) = surface_state_handle_surface_destroy;
          wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)pvVar7 + 0x7c);
          *(code **)((int)pvVar7 + 0x90) = surface_state_handle_renderer_destroy;
          wl_list_insert(pwVar15[0xd].repaint_output,(int)pvVar7 + 0x88);
          pwVar3 = (pwVar10->buffer_ref).buffer;
          if (pwVar3 != (weston_buffer *)0x0) {
            gl_renderer_attach(pwVar10,pwVar3);
            gl_renderer_flush_damage(pwVar10);
          }
          pvVar7 = pwVar10->renderer_state;
        }
        if (*(int *)((int)pvVar7 + 0x10) != 0) {
          pixman_region32_init(&repaint);
          pixman_region32_intersect(&repaint,&(ev->transform).boundingbox,damage);
          pixman_region32_subtract(&repaint,&repaint,&ev->clip);
          iVar1 = pixman_region32_not_empty(&repaint);
          if (iVar1 != 0) {
            glDisable(0xbe2);
            pwVar10 = ev->surface;
            puVar17 = (undefined8 *)pwVar10->renderer_state;
            pwVar14 = pwVar10->compositor;
            if (puVar17 == (undefined8 *)0x0) {
              pwVar21 = pwVar14->renderer;
              puVar17 = (undefined8 *)calloc(1,0x94);
              if (puVar17 != (undefined8 *)0x0) {
                *(undefined4 *)((int)puVar17 + 0x6c) = 1;
                *(undefined4 *)((int)puVar17 + 0x74) = 1;
                *(weston_surface **)(puVar17 + 0xf) = pwVar10;
                pixman_region32_init(puVar17 + 5);
                pwVar10->renderer_state = puVar17;
                *(code **)((int)puVar17 + 0x84) = surface_state_handle_surface_destroy;
                wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)puVar17 + 0x7c);
                *(code **)(puVar17 + 0x12) = surface_state_handle_renderer_destroy;
                wl_list_insert(pwVar21[0xd].repaint_output,puVar17 + 0x11);
                pwVar3 = (pwVar10->buffer_ref).buffer;
                if (pwVar3 != (weston_buffer *)0x0) {
                  gl_renderer_attach(pwVar10,pwVar3);
                  gl_renderer_flush_damage(pwVar10);
                }
                pwVar14 = pwVar10->compositor;
                puVar17 = (undefined8 *)pwVar10->renderer_state;
                goto LAB_00017780;
              }
            }
            else {
LAB_00017780:
              pwVar21 = pwVar14->renderer;
            }
            p_Var4 = pwVar15[0xb].import_gbm_buffer;
            *(_func__Bool_weston_compositor_ptr_gbm_buffer_ptr ***)(puVar17 + 2) =
                 &pwVar21[0xb].import_gbm_buffer;
            *puVar17 = 0;
            puVar17[1] = 0;
            pp_Var19 = &pwVar15[0xb].import_gbm_buffer;
            *(undefined4 *)(puVar17 + 0xd) = 1;
            *(undefined4 *)((int)puVar17 + 0x6c) = 1;
            *(undefined4 *)(puVar17 + 0xe) = 1;
            if ((p_Var4 == (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr *)0x0) &&
               (iVar1 = shader_init((gl_shader *)pp_Var19,(gl_renderer *)(pwVar15 + 1),
                                    (char *)pwVar15[0xc].import_dmabuf,
                                    (char *)pwVar15[0xc].import_gbm_buffer), iVar1 < 0)) {
              weston_log("warning: failed to compile shader\n");
            }
            if (pp_Var19 !=
                (_func__Bool_weston_compositor_ptr_gbm_buffer_ptr **)pwVar15[0xd].read_pixels) {
              glUseProgram(pwVar15[0xb].import_gbm_buffer);
              pwVar15[0xd].read_pixels =
                   (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
                    *)pp_Var19;
            }
            pwVar10 = ev->surface;
            pvVar7 = pwVar10->renderer_state;
            if (pvVar7 == (void *)0x0) {
              pwVar21 = pwVar10->compositor->renderer;
              pvVar7 = calloc(1,0x94);
              if (pvVar7 != (void *)0x0) {
                *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
                *(undefined4 *)((int)pvVar7 + 0x74) = 1;
                *(weston_surface **)((int)pvVar7 + 0x78) = pwVar10;
                pixman_region32_init((int)pvVar7 + 0x28);
                pwVar10->renderer_state = pvVar7;
                *(code **)((int)pvVar7 + 0x84) = surface_state_handle_surface_destroy;
                wl_list_insert((pwVar10->destroy_signal).listener_list.prev,(int)pvVar7 + 0x7c);
                *(code **)((int)pvVar7 + 0x90) = surface_state_handle_renderer_destroy;
                wl_list_insert(pwVar21[0xd].repaint_output,(int)pvVar7 + 0x88);
                pwVar3 = (pwVar10->buffer_ref).buffer;
                if (pwVar3 != (weston_buffer *)0x0) {
                  gl_renderer_attach(pwVar10,pwVar3);
                  gl_renderer_flush_damage(pwVar10);
                }
                pvVar7 = pwVar10->renderer_state;
              }
            }
            glUniformMatrix4fv(pwVar15[0xc].flush_damage,1,0,(int)output->renderer_state + 0x8c);
            glUniform4fv(pwVar15[0xc].surface_copy_content,1,pvVar7);
            glUniform1f(ev->alpha,pwVar15[0xc].surface_get_content_size);
            if (0 < *(int *)((int)pvVar7 + 0x20)) {
              pp_Var8 = (_func_void_weston_surface_ptr_weston_buffer_ptr **)
                        &pwVar15[0xc].flush_damage;
              iVar1 = 0;
              do {
                pp_Var8 = pp_Var8 + 1;
                glUniform1i(*pp_Var8,iVar1);
                iVar1 = iVar1 + 1;
              } while (iVar1 < *(int *)((int)pvVar7 + 0x20));
            }
            pixman_region32_init_rect(&surface_blend,0,0,ev->surface->width,ev->surface->height);
            repaint_region(ev,&repaint,&surface_blend);
            pixman_region32_fini(&surface_blend);
          }
          pixman_region32_fini(&repaint);
        }
      }
LAB_00017428:
      pwVar16 = (ev->link).prev;
      ev = (weston_view *)&pwVar16[-3].next;
    } while (pwVar20 != pwVar16);
  }
  return;
}



// WARNING: Control flow encountered unimplemented instructions
// WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00018094
// WARNING: Restarted to delay deadcode elimination for space: register
// WARNING: Enum "pixman_format_code_t": Some values do not have unique names

void gl_renderer_repaint_output(weston_output *output,pixman_region32_t *output_damage)

{
  undefined8 uVar1;
  wl_list *pwVar2;
  wl_list *pwVar3;
  int iVar4;
  wl_list *pwVar5;
  undefined4 *__ptr;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  weston_renderer *pwVar9;
  pixman_region32_t *ppVar10;
  uint uVar11;
  undefined4 uVar12;
  pixman_region32_t *ppVar13;
  gl_output_state *go;
  undefined4 *puVar14;
  void *pvVar15;
  uint uVar16;
  pixman_region32_t *ppVar17;
  undefined4 *puVar18;
  int iVar19;
  weston_renderer *pwVar20;
  int iVar21;
  double dVar22;
  undefined4 uVar23;
  int in_stack_ffffff18;
  pixman_region32_t buffer_damage;
  pixman_region32_t total_damage;
  int nrects;
  
  puVar8 = (undefined4 *)output->renderer_state;
  pwVar9 = output->compositor->renderer;
  iVar4 = eglMakeCurrent(pwVar9[1].surface_set_color,*puVar8,*puVar8,pwVar9[1].destroy);
  if (iVar4 == 0) {
    if (use_output::errored == 0) {
      use_output::errored = 1;
      weston_log("Failed to make EGL context current.\n");
      gl_renderer_print_egl_error_state();
      return;
    }
    return;
  }
  puVar14 = puVar8 + 0x23;
  glViewport(puVar8[0x14],puVar8[0x1f],output->current_mode->width,output->current_mode->height);
  memcpy(puVar14,&output->matrix,0x44);
  uVar1._0_4_ = output->current_mode->width;
  uVar1._4_4_ = output->current_mode->height;
  dVar22 = (double)(longlong)(int)uVar1 * 0.5;
  uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
  weston_matrix_translate(-(float)dVar22,uVar23,0,puVar14);
  weston_matrix_scale((float)(2.0 / (double)(longlong)output->current_mode->width),uVar23,0x3f800000
                      ,puVar14);
  if (pwVar9[1].repaint_output != (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x0) {
    pixman_region32_init((pixman_region32_t *)&nrects);
    pixman_region32_subtract((pixman_region32_t *)&nrects,&output->region,output_damage);
    pwVar9[1].repaint_output = (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x0;
    repaint_views(output,(pixman_region32_t *)&nrects);
    pwVar9[1].repaint_output = (_func_void_weston_output_ptr_pixman_region32_t_ptr *)0x1;
    pixman_region32_fini((pixman_region32_t *)&nrects);
  }
  pixman_region32_init(&total_damage);
  pixman_region32_init(&buffer_damage);
  puVar14 = (undefined4 *)output->renderer_state;
  pwVar20 = output->compositor->renderer;
  nrects = 0;
  if (pwVar20[3].destroy != (_func_void_weston_compositor_ptr *)0x0) {
    iVar4 = eglQuerySurface(pwVar20[1].surface_set_color,*puVar14,0x313d,&nrects);
    if (iVar4 == 0) {
      weston_log("buffer age query failed.\n");
      gl_renderer_print_egl_error_state();
    }
    if (nrects != 0 && nrects < 4) {
      if (nrects < 2) {
        uVar11 = 0;
      }
      else {
        iVar21 = puVar14[0xb];
        uVar11 = 0;
        iVar4 = iVar21;
        do {
          iVar19 = iVar4 + 1;
          uVar11 = uVar11 | puVar14[iVar4 % 2 + 0xc];
          iVar4 = iVar19;
        } while (iVar19 != nrects + iVar21 + -1);
        if ((uVar11 & 0x10) == 0) {
          iVar4 = 0;
          while( true ) {
            iVar21 = iVar21 + iVar4;
            iVar4 = iVar4 + 1;
            pixman_region32_union(&buffer_damage,&buffer_damage,puVar14 + (iVar21 % 2) * 5 + 1);
            if (nrects + -1 <= iVar4) break;
            iVar21 = puVar14[0xb];
          }
        }
        else {
          uVar11 = uVar11 | 0xf;
          pixman_region32_copy(&buffer_damage,&output->region);
        }
      }
      goto LAB_00018130;
    }
  }
  pixman_region32_copy(&buffer_damage,&output->region);
  uVar11 = 0xf;
LAB_00018130:
  if (output->compositor->renderer[3].destroy != (_func_void_weston_compositor_ptr *)0x0) {
    pvVar15 = output->renderer_state;
    uVar12 = puVar8[0x22];
    iVar4 = (*(int *)((int)pvVar15 + 0x2c) + 1) % 2;
    *(int *)((int)pvVar15 + 0x2c) = iVar4;
    pixman_region32_copy((int)pvVar15 + iVar4 * 0x14 + 4,output_damage);
    *(undefined4 *)((int)pvVar15 + (*(int *)((int)pvVar15 + 0x2c) + 0xc) * 4) = uVar12;
  }
  pixman_region32_union(&total_damage,&buffer_damage,output_damage);
  uVar16 = puVar8[0x22];
  repaint_views(output,&total_damage);
  pixman_region32_fini(&total_damage);
  uVar11 = uVar11 | uVar16;
  pixman_region32_fini(&buffer_damage);
  if (uVar11 != 0) {
    go = (gl_output_state *)output->renderer_state;
    pwVar20 = output->compositor->renderer;
    iVar4 = output->current_mode->width + go->borders[1].width + go->borders[2].width;
    iVar21 = output->current_mode->height + go->borders[0].height + go->borders[3].height;
    glDisable(0xbe2);
    if ((pwVar20[4].flush_damage == (_func_void_weston_surface_ptr *)0x0) &&
       (iVar19 = shader_init((gl_shader *)&pwVar20[4].flush_damage,(gl_renderer *)(pwVar20 + 1),
                             (char *)pwVar20[5].repaint_output,(char *)pwVar20[5].flush_damage),
       iVar19 < 0)) {
      weston_log("warning: failed to compile shader\n");
    }
    if (&pwVar20[4].flush_damage != (_func_void_weston_surface_ptr **)pwVar20[0xd].read_pixels) {
      glUseProgram(pwVar20[4].flush_damage);
      pwVar20[0xd].read_pixels =
           (_func_int_weston_output_ptr_pixman_format_code_t_void_ptr_uint32_t_uint32_t_uint32_t_uint32_t
            *)&pwVar20[4].flush_damage;
    }
    glViewport(0,0,iVar4,iVar21);
    weston_matrix_init(&nrects);
    weston_matrix_translate((float)((double)(longlong)-iVar4 * 0.5),uVar23,0,&nrects);
    weston_matrix_scale((float)(2.0 / (double)(longlong)iVar4),uVar23,0x3f800000,&nrects);
    glUniformMatrix4fv(pwVar20[4].destroy,1,0,&nrects);
    glUniform1i(pwVar20[4].surface_get_content_size,0);
    glUniform1f(0x3f800000,pwVar20[4].import_gbm_buffer);
    glActiveTexture(0x84c0);
    if ((uVar11 & 1) != 0) {
      draw_output_border_texture(go,GL_RENDERER_BORDER_TOP,0,0,iVar4,go->borders[0].height);
    }
    if ((uVar11 & 2) != 0) {
      draw_output_border_texture
                (go,GL_RENDERER_BORDER_LEFT,0,go->borders[0].height,go->borders[1].width,
                 output->current_mode->height);
    }
    if ((uVar11 & 4) != 0) {
      iVar19 = go->borders[2].width;
      draw_output_border_texture
                (go,GL_RENDERER_BORDER_RIGHT,iVar4 - iVar19,go->borders[0].height,iVar19,
                 output->current_mode->height);
    }
    if ((uVar11 & 8) != 0) {
      iVar19 = go->borders[3].height;
      draw_output_border_texture(go,GL_RENDERER_BORDER_BOTTOM,0,iVar21 - iVar19,iVar4,iVar19);
    }
  }
  pixman_region32_copy(&output->previous_damage,output_damage);
  pwVar5 = (output->frame_signal).listener_list.next;
  pwVar3 = pwVar5->next;
  while (pwVar2 = pwVar3, pwVar5 != &(output->frame_signal).listener_list) {
    (*(code *)pwVar5[1].prev)(pwVar5,output);
    pwVar3 = pwVar2->next;
    pwVar5 = pwVar2;
  }
  if (pwVar9[2].surface_copy_content ==
      (_func_int_weston_surface_ptr_void_ptr_size_t_int_int_int_int *)0x0) {
    iVar4 = eglSwapBuffers(pwVar9[1].surface_set_color,*puVar8);
  }
  else {
    pixman_region32_init(&buffer_damage);
    ppVar10 = &buffer_damage;
    weston_transformed_region(output->width,output->height,output->transform,output->current_scale);
    pvVar15 = output->renderer_state;
    if ((((*(int *)((int)pvVar15 + 0x48) != 0) || (*(int *)((int)pvVar15 + 0x70) != 0)) ||
        (*(int *)((int)pvVar15 + 0x84) != 0)) || (*(int *)((int)pvVar15 + 0x5c) != 0)) {
      pixman_region32_translate(&buffer_damage,puVar8[0x14],puVar8[0x10]);
      uVar11 = puVar8[0x22];
      if (uVar11 != 0) {
        pvVar15 = output->renderer_state;
        iVar4 = output->current_mode->height;
        iVar21 = *(int *)((int)pvVar15 + 0x7c);
        ppVar13 = (pixman_region32_t *)
                  (output->current_mode->width + *(int *)((int)pvVar15 + 0x50) +
                  *(int *)((int)pvVar15 + 100));
        ppVar17 = *(pixman_region32_t **)((int)pvVar15 + 0x40);
        if ((uVar11 & 1) != 0) {
          output_damage = ppVar13;
          ppVar10 = ppVar17;
          pixman_region32_union_rect(&buffer_damage,&buffer_damage,0);
        }
        if ((uVar11 & 2) != 0) {
          ppVar10 = (pixman_region32_t *)output->current_mode->height;
          output_damage = *(pixman_region32_t **)((int)pvVar15 + 0x50);
          pixman_region32_union_rect
                    (&buffer_damage,&buffer_damage,0,*(undefined4 *)((int)pvVar15 + 0x40));
        }
        if ((uVar11 & 4) != 0) {
          output_damage = *(pixman_region32_t **)((int)pvVar15 + 100);
          ppVar10 = (pixman_region32_t *)output->current_mode->height;
          pixman_region32_union_rect
                    (&buffer_damage,&buffer_damage,(int)ppVar13 - (int)output_damage,
                     *(undefined4 *)((int)pvVar15 + 0x40));
        }
        if ((uVar11 & 8) != 0) {
          ppVar10 = *(pixman_region32_t **)((int)pvVar15 + 0x7c);
          pixman_region32_union_rect
                    (&buffer_damage,&buffer_damage,0,
                     (int)ppVar17 + ((iVar21 + iVar4) - (int)ppVar10));
          output_damage = ppVar13;
        }
      }
    }
    puVar14 = (undefined4 *)pixman_region32_rectangles(&buffer_damage,&nrects);
    __ptr = (undefined4 *)malloc(nrects << 4);
    iVar4 = output->current_mode->height + puVar8[0x10] + puVar8[0x1f];
    if (0 < nrects) {
      if ((uint)nrects < 4 || puVar14 < __ptr + 0x10 && __ptr < puVar14 + 0x10) {
        puVar6 = __ptr + 4;
        piVar7 = puVar14 + 2;
        do {
          puVar14 = puVar6 + 4;
          puVar6[-4] = piVar7[-2];
          puVar6[-3] = iVar4 - piVar7[1];
          puVar6[-2] = *piVar7 - piVar7[-2];
          puVar6[-1] = piVar7[1] - piVar7[-1];
          puVar6 = puVar14;
          piVar7 = piVar7 + 4;
        } while (puVar14 != __ptr + (nrects + 1) * 4);
      }
      else {
        if (nrects != 4) {
                    // WARNING: Unimplemented instruction - Truncating control flow here
          halt_unimplemented();
        }
        iVar21 = 0;
        puVar18 = puVar14;
        puVar6 = __ptr;
        do {
          *puVar6 = puVar14[iVar21 * 4];
          puVar6[1] = iVar4 - puVar18[3];
          iVar19 = iVar21 * 4;
          iVar21 = iVar21 + 1;
          puVar6[2] = puVar18[2] - puVar14[iVar19];
          puVar6[3] = puVar18[3] - puVar18[1];
          puVar18 = puVar18 + 4;
          puVar6 = puVar6 + 4;
        } while (iVar21 < 4);
      }
    }
    iVar4 = (*pwVar9[2].surface_copy_content)
                      ((weston_surface *)pwVar9[1].surface_set_color,(void *)*puVar8,(size_t)__ptr,
                       nrects,(int)output_damage,(int)ppVar10,in_stack_ffffff18);
    free(__ptr);
    pixman_region32_fini(&buffer_damage);
  }
  if ((iVar4 == 0) && (gl_renderer_repaint_output::errored == 0)) {
    gl_renderer_repaint_output::errored = 1;
    weston_log("Failed in eglSwapBuffers.\n");
    gl_renderer_print_egl_error_state();
    puVar8[0x22] = 0;
  }
  else {
    puVar8[0x22] = 0;
  }
  return;
}



float float_difference(float a,float b)

{
  float fVar1;
  float fVar2;
  float adiff;
  float fVar3;
  float diff;
  
  diff = a - b;
  fVar3 = ABS(diff);
  if (4.7019774e-38 < fVar3) {
    fVar1 = ABS(a);
    fVar2 = ABS(b);
    if (fVar1 != fVar2 && fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) {
      fVar2 = fVar1;
    }
    if (fVar2 * 4e-05 < fVar3 == (NAN(fVar2 * 4e-05) || NAN(fVar3))) {
      diff = 0.0;
    }
    return diff;
  }
  return 0.0;
}



int clip_simple(clip_context *ctx,polygon8 *surf,float *ex,float *ey)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = surf->n;
  if (0 < iVar2) {
    pfVar3 = surf->y;
    pfVar1 = surf->x;
    do {
      fVar6 = surf->x[0];
      surf = (polygon8 *)(surf->x + 1);
      fVar7 = (ctx->clip).x1;
      fVar5 = (ctx->clip).x2;
      fVar4 = fVar7;
      if (fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7))) {
        fVar4 = fVar6;
      }
      if ((fVar4 == fVar5 || fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) &&
         (fVar5 = fVar7, fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7)))) {
        fVar5 = fVar6;
      }
      *ex = fVar5;
      ex = ex + 1;
      fVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      fVar7 = (ctx->clip).y1;
      fVar5 = (ctx->clip).y2;
      fVar4 = fVar7;
      if (fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7))) {
        fVar4 = fVar6;
      }
      if ((fVar4 == fVar5 || fVar4 < fVar5 != (NAN(fVar4) || NAN(fVar5))) &&
         (fVar5 = fVar7, fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7)))) {
        fVar5 = fVar6;
      }
      *ey = fVar5;
      ey = ey + 1;
    } while (surf != (polygon8 *)(pfVar1 + iVar2));
  }
  return iVar2;
}



int clip_transformed(clip_context *ctx,polygon8 *surf,float *ex,float *ey)

{
  int iVar1;
  polygon8 *ppVar2;
  polygon8 *ppVar3;
  int iVar4;
  polygon8 *ppVar5;
  polygon8 *ppVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  polygon8 *ppVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  polygon8 polygon;
  
  if (1 < surf->n) {
    ppVar12 = (polygon8 *)(surf->x + surf->n);
    ppVar5 = &polygon;
    fVar9 = ppVar12->x[7];
    pfVar7 = surf->y;
    fVar14 = (float)ppVar12[-1].n;
    (ctx->vertices).x = ppVar5->x;
    (ctx->vertices).y = polygon.y;
    (ctx->prev).x = fVar14;
    (ctx->prev).y = fVar9;
    ppVar2 = ppVar5;
    pfVar8 = pfVar7;
    ppVar6 = surf;
    do {
      fVar16 = (ctx->clip).x1;
      fVar18 = ppVar6->x[0];
      ppVar6 = (polygon8 *)(ppVar6->x + 1);
      fVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      if (fVar16 <= fVar14) {
        uVar10 = 2;
      }
      else {
        uVar10 = 0;
      }
      if (fVar18 < fVar16 == (NAN(fVar18) || NAN(fVar16))) {
        uVar10 = uVar10 | 1;
      }
      if (uVar10 == 2) {
        fVar13 = fVar14 - fVar18;
        fVar17 = fVar9;
        if (4.7019774e-38 < ABS(fVar13)) {
          fVar14 = ABS(fVar14);
          fVar15 = ABS(fVar18);
          if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
            fVar14 = fVar15;
          }
          if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
            fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).y - fVar9);
          }
        }
        pfVar11 = (ctx->vertices).y;
        ppVar3 = (polygon8 *)(ppVar2->x + 1);
        (ctx->vertices).x = (float *)ppVar3;
        ppVar2->x[0] = fVar16;
        (ctx->vertices).y = pfVar11 + 1;
        *pfVar11 = fVar17;
      }
      else if (uVar10 == 3) {
        pfVar11 = (ctx->vertices).y;
        ppVar3 = (polygon8 *)(ppVar2->x + 1);
        (ctx->vertices).x = (float *)ppVar3;
        ppVar2->x[0] = fVar18;
        (ctx->vertices).y = pfVar11 + 1;
        *pfVar11 = fVar9;
      }
      else {
        ppVar3 = ppVar2;
        if (uVar10 == 1) {
          fVar13 = fVar14 - fVar18;
          fVar17 = fVar9;
          if (4.7019774e-38 < ABS(fVar13)) {
            fVar14 = ABS(fVar14);
            fVar15 = ABS(fVar18);
            if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
              fVar14 = fVar15;
            }
            if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
              fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).y - fVar9);
            }
          }
          pfVar11 = (ctx->vertices).y;
          ppVar3 = (polygon8 *)(ppVar2->x + 2);
          ppVar2->x[0] = fVar16;
          *pfVar11 = fVar17;
          (ctx->vertices).x = (float *)ppVar3;
          ppVar2->x[1] = fVar18;
          (ctx->vertices).y = pfVar11 + 2;
          pfVar11[1] = fVar9;
        }
      }
      (ctx->prev).x = fVar18;
      (ctx->prev).y = fVar9;
      ppVar2 = ppVar3;
      fVar14 = fVar18;
    } while (ppVar6 != ppVar12);
    polygon.n = (int)ppVar3 - (int)ppVar5 >> 2;
    if (polygon.n < 2) {
      surf->n = 0;
      *ex = surf->x[0];
      *ey = surf->y[0];
LAB_00019388:
      iVar4 = 0;
      iVar1 = 1;
      fVar14 = *ex;
      goto LAB_00019398;
    }
    fVar14 = polygon.x[polygon.n + -1];
    fVar9 = polygon.x[polygon.n + 7];
    (ctx->vertices).x = surf->x;
    (ctx->vertices).y = pfVar7;
    (ctx->prev).y = fVar9;
    (ctx->prev).x = fVar14;
    ppVar2 = ppVar5;
    ppVar6 = surf;
    do {
      fVar16 = (ctx->clip).x2;
      fVar18 = ppVar2->x[0];
      pfVar8 = ppVar2->x;
      fVar9 = ppVar2->y[0];
      if (fVar16 == fVar14 || fVar16 < fVar14 != (NAN(fVar16) || NAN(fVar14))) {
        uVar10 = 0;
      }
      else {
        uVar10 = 2;
      }
      if (fVar18 < fVar16) {
        uVar10 = uVar10 | 1;
      }
      if (uVar10 == 2) {
        fVar13 = fVar14 - fVar18;
        fVar17 = fVar9;
        if (4.7019774e-38 < ABS(fVar13)) {
          fVar14 = ABS(fVar14);
          fVar15 = ABS(fVar18);
          if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
            fVar14 = fVar15;
          }
          if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
            fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).y - fVar9);
          }
        }
        pfVar11 = (ctx->vertices).y;
        ppVar12 = (polygon8 *)(ppVar6->x + 1);
        (ctx->vertices).x = (float *)ppVar12;
        ppVar6->x[0] = fVar16;
        (ctx->vertices).y = pfVar11 + 1;
        *pfVar11 = fVar17;
      }
      else if (uVar10 == 3) {
        pfVar11 = (ctx->vertices).y;
        ppVar12 = (polygon8 *)(ppVar6->x + 1);
        (ctx->vertices).x = (float *)ppVar12;
        ppVar6->x[0] = fVar18;
        (ctx->vertices).y = pfVar11 + 1;
        *pfVar11 = fVar9;
      }
      else {
        ppVar12 = ppVar6;
        if (uVar10 == 1) {
          fVar13 = fVar14 - fVar18;
          fVar17 = fVar9;
          if (4.7019774e-38 < ABS(fVar13)) {
            fVar14 = ABS(fVar14);
            fVar15 = ABS(fVar18);
            if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
              fVar14 = fVar15;
            }
            if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
              fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).y - fVar9);
            }
          }
          pfVar11 = (ctx->vertices).y;
          ppVar12 = (polygon8 *)(ppVar6->x + 2);
          ppVar6->x[0] = fVar16;
          *pfVar11 = fVar17;
          (ctx->vertices).x = (float *)ppVar12;
          ppVar6->x[1] = fVar18;
          (ctx->vertices).y = pfVar11 + 2;
          pfVar11[1] = fVar9;
        }
      }
      (ctx->prev).x = fVar18;
      (ctx->prev).y = fVar9;
      ppVar2 = (polygon8 *)(pfVar8 + 1);
      ppVar6 = ppVar12;
      fVar14 = fVar18;
    } while ((polygon8 *)(pfVar8 + 1) != (polygon8 *)((int)ppVar5 + ((int)ppVar3 - (int)ppVar5)));
    iVar4 = (int)ppVar12 - (int)surf;
    iVar1 = iVar4 >> 2;
    surf->n = iVar1;
    if (1 < iVar1) {
      fVar9 = *(float *)((int)surf + iVar4 + -4);
      fVar14 = *(float *)((int)surf + iVar4 + 0x1c);
      (ctx->vertices).x = ppVar5->x;
      (ctx->vertices).y = polygon.y;
      (ctx->prev).x = fVar9;
      (ctx->prev).y = fVar14;
      pfVar8 = pfVar7;
      ppVar2 = surf;
      ppVar6 = ppVar5;
      do {
        fVar16 = (ctx->clip).y1;
        fVar18 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar9 = ppVar2->x[0];
        ppVar2 = (polygon8 *)(ppVar2->x + 1);
        if (fVar16 <= fVar14) {
          uVar10 = 2;
        }
        else {
          uVar10 = 0;
        }
        if (fVar18 < fVar16 == (NAN(fVar18) || NAN(fVar16))) {
          uVar10 = uVar10 | 1;
        }
        if (uVar10 == 2) {
          fVar13 = fVar14 - fVar18;
          fVar17 = fVar9;
          if (4.7019774e-38 < ABS(fVar13)) {
            fVar14 = ABS(fVar14);
            fVar15 = ABS(fVar18);
            if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
              fVar14 = fVar15;
            }
            if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
              fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).x - fVar9);
            }
          }
          pfVar11 = (ctx->vertices).y;
          ppVar12 = (polygon8 *)(ppVar6->x + 1);
          (ctx->vertices).x = (float *)ppVar12;
          ppVar6->x[0] = fVar17;
          (ctx->vertices).y = pfVar11 + 1;
          *pfVar11 = fVar16;
        }
        else if (uVar10 == 3) {
          pfVar11 = (ctx->vertices).y;
          ppVar12 = (polygon8 *)(ppVar6->x + 1);
          (ctx->vertices).x = (float *)ppVar12;
          ppVar6->x[0] = fVar9;
          (ctx->vertices).y = pfVar11 + 1;
          *pfVar11 = fVar18;
        }
        else {
          ppVar12 = ppVar6;
          if (uVar10 == 1) {
            fVar13 = fVar14 - fVar18;
            fVar17 = fVar9;
            if (4.7019774e-38 < ABS(fVar13)) {
              fVar14 = ABS(fVar14);
              fVar15 = ABS(fVar18);
              if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
                fVar14 = fVar15;
              }
              if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
                fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).x - fVar9);
              }
            }
            pfVar11 = (ctx->vertices).y;
            ppVar12 = (polygon8 *)(ppVar6->x + 2);
            ppVar6->x[0] = fVar17;
            *pfVar11 = fVar16;
            (ctx->vertices).x = (float *)ppVar12;
            ppVar6->x[1] = fVar9;
            (ctx->vertices).y = pfVar11 + 2;
            pfVar11[1] = fVar18;
          }
        }
        (ctx->prev).x = fVar9;
        (ctx->prev).y = fVar18;
        ppVar6 = ppVar12;
        fVar14 = fVar18;
      } while (pfVar8 != surf->y + iVar1);
      polygon.n = (int)ppVar12 - (int)ppVar5 >> 2;
      if (1 < polygon.n) {
        ppVar6 = (polygon8 *)((int)ppVar5 + ((int)ppVar12 - (int)ppVar5));
        (ctx->vertices).x = surf->x;
        fVar14 = polygon.x[polygon.n + 7];
        fVar9 = polygon.x[polygon.n + -1];
        (ctx->vertices).y = pfVar7;
        (ctx->prev).x = fVar9;
        (ctx->prev).y = fVar14;
        ppVar2 = surf;
        do {
          fVar16 = (ctx->clip).y2;
          fVar18 = ppVar5->y[0];
          fVar9 = ppVar5->x[0];
          ppVar5 = (polygon8 *)(ppVar5->x + 1);
          if (fVar16 == fVar14 || fVar16 < fVar14 != (NAN(fVar16) || NAN(fVar14))) {
            uVar10 = 0;
          }
          else {
            uVar10 = 2;
          }
          if (fVar18 < fVar16) {
            uVar10 = uVar10 | 1;
          }
          if (uVar10 == 2) {
            fVar13 = fVar14 - fVar18;
            fVar17 = fVar9;
            if (4.7019774e-38 < ABS(fVar13)) {
              fVar14 = ABS(fVar14);
              fVar15 = ABS(fVar18);
              if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
                fVar14 = fVar15;
              }
              if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
                fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).x - fVar9);
              }
            }
            pfVar8 = (ctx->vertices).y;
            ppVar12 = (polygon8 *)(ppVar2->x + 1);
            (ctx->vertices).x = (float *)ppVar12;
            ppVar2->x[0] = fVar17;
            (ctx->vertices).y = pfVar8 + 1;
            *pfVar8 = fVar16;
          }
          else if (uVar10 == 3) {
            pfVar8 = (ctx->vertices).y;
            ppVar12 = (polygon8 *)(ppVar2->x + 1);
            (ctx->vertices).x = (float *)ppVar12;
            ppVar2->x[0] = fVar9;
            (ctx->vertices).y = pfVar8 + 1;
            *pfVar8 = fVar18;
          }
          else {
            ppVar12 = ppVar2;
            if (uVar10 == 1) {
              fVar13 = fVar14 - fVar18;
              fVar17 = fVar9;
              if (4.7019774e-38 < ABS(fVar13)) {
                fVar14 = ABS(fVar14);
                fVar15 = ABS(fVar18);
                if (fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15))) {
                  fVar14 = fVar15;
                }
                if ((fVar14 * 4e-05 < ABS(fVar13)) && (fVar13 != 0.0)) {
                  fVar17 = fVar9 + ((fVar16 - fVar18) / fVar13) * ((ctx->prev).x - fVar9);
                }
              }
              pfVar8 = (ctx->vertices).y;
              ppVar12 = (polygon8 *)(ppVar2->x + 2);
              ppVar2->x[0] = fVar17;
              *pfVar8 = fVar16;
              (ctx->vertices).x = (float *)ppVar12;
              ppVar2->x[1] = fVar9;
              (ctx->vertices).y = pfVar8 + 2;
              pfVar8[1] = fVar18;
            }
          }
          (ctx->prev).x = fVar9;
          (ctx->prev).y = fVar18;
          ppVar2 = ppVar12;
          fVar14 = fVar18;
        } while (ppVar5 != ppVar6);
        iVar1 = (int)ppVar12 - (int)surf >> 2;
        surf->n = iVar1;
        *ex = surf->x[0];
        *ey = surf->y[0];
        if (1 < iVar1) {
          iVar1 = 1;
          fVar14 = *ex;
          pfVar8 = surf->x + 1;
          do {
            fVar9 = *pfVar8;
            pfVar7 = pfVar8 + 1;
            iVar4 = (iVar1 + 0x3fffffff) * 4;
            fVar16 = ABS(fVar14 - fVar9);
            if (4.7019774e-38 < fVar16) {
              fVar18 = ABS(fVar14);
              if (fVar18 <= ABS(fVar9)) {
                fVar18 = ABS(fVar9);
              }
              if ((fVar16 <= fVar18 * 4e-05) || (fVar14 - fVar9 == 0.0)) goto LAB_00018de0;
LAB_00018d98:
              iVar4 = iVar4 + 4;
              ex[iVar1 + 0x40000000] = fVar9;
              ey[iVar1 + 0x40000000] = pfVar8[8];
              fVar14 = ex[iVar1 + 0x40000000];
              iVar1 = iVar1 + 1;
            }
            else {
LAB_00018de0:
              fVar18 = ey[iVar1 + 0x3fffffff] - pfVar8[8];
              fVar16 = ABS(fVar18);
              if (4.7019774e-38 < fVar16) {
                fVar13 = ABS(pfVar8[8]);
                fVar17 = ABS(ey[iVar1 + 0x3fffffff]);
                if (fVar17 == fVar13 || fVar17 < fVar13 != (NAN(fVar17) || NAN(fVar13))) {
                  fVar17 = fVar13;
                }
                if ((fVar17 * 4e-05 < fVar16) && (fVar18 != 0.0)) goto LAB_00018d98;
              }
            }
            pfVar8 = pfVar7;
          } while ((float *)((int)surf + ((int)ppVar12 - (int)surf)) != pfVar7);
          goto LAB_00019398;
        }
        goto LAB_00019388;
      }
    }
  }
  iVar4 = 0;
  iVar1 = 1;
  surf->n = 0;
  *ex = surf->x[0];
  *ey = surf->y[0];
  fVar14 = *ex;
LAB_00019398:
  fVar16 = fVar14 - surf->x[0];
  fVar9 = ABS(fVar16);
  if (4.7019774e-38 < fVar9) {
    fVar14 = ABS(fVar14);
    fVar18 = ABS(surf->x[0]);
    if (fVar14 == fVar18 || fVar14 < fVar18 != (NAN(fVar14) || NAN(fVar18))) {
      fVar14 = 4e-05;
    }
    else {
      fVar18 = 4e-05;
    }
    if ((fVar18 * fVar14 < fVar9) && (fVar16 != 0.0)) {
      return iVar1;
    }
  }
  fVar9 = *(float *)((int)ey + iVar4) - surf->y[0];
  fVar14 = ABS(fVar9);
  if (4.7019774e-38 < fVar14) {
    fVar18 = ABS(*(float *)((int)ey + iVar4));
    fVar16 = ABS(surf->y[0]);
    if (fVar18 == fVar16 || fVar18 < fVar16 != (NAN(fVar18) || NAN(fVar16))) {
      fVar18 = 4e-05;
    }
    else {
      fVar16 = 4e-05;
    }
    if ((fVar16 * fVar18 < fVar14) && (fVar9 != 0.0)) {
      return iVar1;
    }
  }
  return iVar1 + -1;
}



void _fini(void)

{
  return;
}


