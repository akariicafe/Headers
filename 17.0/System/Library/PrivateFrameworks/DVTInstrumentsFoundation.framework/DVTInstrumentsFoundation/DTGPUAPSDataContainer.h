@class NSDictionary, NSMutableDictionary, NSMutableArray;

@interface DTGPUAPSDataContainer : NSObject <NSSecureCoding> {
    NSMutableDictionary *_config;
    NSMutableDictionary *_data;
    NSMutableArray *_uscFiles;
    NSMutableArray *_rdeFiles;
    NSMutableArray *_customFiles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) unsigned long long numUSCs;
@property (readonly, nonatomic) unsigned long long numRDEs;

+ (id)fromData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)encode;
- (id)getData:(id)a0;
- (void)addConfigEntry:(id)a0 value:(id)a1;
- (void)addCustomData:(id)a0 data:(id)a1;
- (void)addDataForRDESourceIndex:(unsigned int)a0 bufferIndex:(unsigned int)a1 data:(id)a2;
- (void)addDataForUSCAtIndex:(unsigned int)a0 data:(id)a1;
- (void)enumerateRDEData:(id /* block */)a0;
- (void)enumerateUSCData:(id /* block */)a0;
- (id)initWithConfig:(id)a0 baseFolder:(id)a1;
- (unsigned long long)numBuffersAtRDEIndex:(unsigned long long)a0;

@end
