@class NSString;

@interface MTLPostVertexDumpOutput : NSObject

@property (readonly) NSString *airMDType;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithAirMDType:(id)a0 dataType:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 aluType:(unsigned long long)a3 name:(id)a4 offset:(unsigned long long)a5;

@end
