@class NSData, HMDWakeConfigurationParameters, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *reserved;
@property (retain, nonatomic) HMDWakeConfigurationParameters *custom1;
@property (retain, nonatomic) HMDWakeConfigurationParameters *custom2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithReserved:(id)a0 custom1:(id)a1 custom2:(id)a2;

@end
