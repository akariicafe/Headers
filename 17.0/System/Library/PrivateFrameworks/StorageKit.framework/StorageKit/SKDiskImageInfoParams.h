@class NSDictionary;

@interface SKDiskImageInfoParams : NSObject

@property (nonatomic) BOOL stdinPassPhrase;
@property (nonatomic) BOOL extraInfo;
@property (copy, nonatomic) NSDictionary *imageInfo;

+ (id)format_info_key;
+ (id)asif_info_key;
+ (id)checksum_info_key;
+ (id)compression_info_key;
+ (id)encryption_info_key;
+ (id)format_desc_info_key;
+ (id)getDictDescriptionWithDisk:(id)a0;
+ (id)identity_info_key;
+ (id)partitions_info_key;
+ (id)runs_info_key;
+ (id)size_info_key;

- (void).cxx_destruct;
- (id)getInfoDictWithDisk:(id)a0;

@end
