@class NSNumber, NSData, HMDVideoResolution;

@interface HMDVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *imageWidth;
@property (readonly, copy, nonatomic) NSNumber *imageHeight;
@property (readonly, copy, nonatomic) HMDVideoResolution *videoResolution;
@property (readonly, copy, nonatomic) NSNumber *framerate;
@property (readonly, copy) NSData *tlvData;

+ (BOOL)translateImageResolution:(id)a0 imageWidth:(id *)a1 imageHeight:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithResolution:(id)a0 framerate:(id)a1;
- (id)translateImageWidth:(id)a0 imageHeight:(id)a1;

@end
