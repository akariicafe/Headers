@class NSString;

@interface FTMutableUpdateAudioInfo : FTUpdateAudioInfo

@property (copy, nonatomic) NSString *product_id;
@property (copy, nonatomic) NSString *vendor_id;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
