@class NSString;

@interface TwoNetsStyleTransfer : NSObject {
    void *ctx;
    void *plan;
    struct { void *plan; int network_index; } net;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } output_layer_name;
    unsigned long long dim_data0[5];
    unsigned long long dim_data0__small[5];
    unsigned long long dim_data2[5];
    unsigned long long dim_data2__small[5];
    struct __IOSurface { } *result;
    struct postprocessing_settings_t { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } name; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } network; int do_blend; float blend_alpha; int grayscale_i0; int grayscale_i1; float temporal_alpha; float gamma; float saturation; float contrast; float brightness; int color_transfer_mode; int width; int height; int width_fast; int height_fast; int width_capture; int height_capture; int width_miniature; int height_miniature; int width_fullscreen; int height_fullscreen; int width_hd; int height_hd; float old_frame_scale; float noise_strength; int dyn_noise; float noise_speed; float preprocessing_bias_b; float preprocessing_bias_g; float preprocessing_bias_r; float preprocessing_scale; float preprocessing_old_frame_bias_scale; BOOL high_quality_scaling; } current_postprocessing_settings;
    NSString *currentNetworkPath;
}

+ (BOOL)supportsANE;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __IOSurface { } *)executeSyncWithImage:(struct __CVBuffer { } *)a0 smallImage:(struct __CVBuffer { } *)a1;
- (int)heightBig;
- (int)heightSmall;
- (int)load:(id)a0 outputName:(id)a1;
- (int)widthBig;
- (int)widthSmall;

@end
