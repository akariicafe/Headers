@class NSObject, NSString, NSNumber, AVAudioFormat;
@protocol OS_xpc_object;

@interface REAudioPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_xpc_object> *buffer;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) NSNumber *length;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned char inputMode;
@property (readonly, nonatomic) float referenceLevel;
@property (readonly, nonatomic) int loopCount;
@property (readonly, nonatomic) unsigned long long mixGroupID;
@property (readonly, nonatomic) NSString *mixGroupName;
@property (readonly, nonatomic) BOOL streaming;
@property (readonly, nonatomic) int normalizationMode;
@property (readonly, nonatomic) int calibrationMode;
@property (readonly, nonatomic) double calibrationLevel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBuffer:(id)a0 format:(id)a1 length:(unsigned int)a2 inputMode:(unsigned char)a3 referenceLevel:(float)a4 loopCount:(int)a5 mixGroupID:(unsigned long long)a6 mixGroupName:(id)a7 streaming:(BOOL)a8 normalizationMode:(int)a9 calibrationMode:(int)a10 calibrationLevel:(double)a11;
- (id)initWithFilePath:(id)a0 inputMode:(unsigned char)a1 referenceLevel:(float)a2 loopCount:(int)a3 mixGroupID:(unsigned long long)a4 mixGroupName:(id)a5 streaming:(BOOL)a6 normalizationMode:(int)a7 calibrationMode:(int)a8 calibrationLevel:(double)a9;

@end
