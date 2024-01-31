@class NSUUID, NSString;

@interface CUMobileDevice : NSObject <NSCopying>

@property (nonatomic) BOOL connected;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *internalModel;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL paired;
@property (nonatomic) BOOL placeholder;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSString *wifiAddress;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
