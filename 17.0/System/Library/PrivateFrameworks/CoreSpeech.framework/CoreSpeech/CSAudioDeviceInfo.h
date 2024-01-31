@class NSString, NSArray, CSAudioRecordDeviceInfo;

@interface CSAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CSAudioRecordDeviceInfo *recordDeviceInfo;
@property (readonly, copy, nonatomic) NSString *playbackRoute;
@property (readonly, copy, nonatomic) NSArray *playbackDeviceTypeList;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)xpcObject;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordDeviceInfo:(id)a0 playbackRoute:(id)a1 playbackDeviceTypeList:(id)a2;

@end
