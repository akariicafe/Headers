@class NSArray, NSMutableArray, NSURL;

@interface DIShadowChain : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) NSArray *shadowStats;
@property (readonly, nonatomic) NSURL *activeURL;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *mountPoints;
@property (nonatomic) BOOL shouldValidate;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)openWritable:(BOOL)a0 createNonExisting:(BOOL)a1;
- (BOOL)addShadowNodes:(id)a0 error:(id *)a1;
- (BOOL)addShadowURLs:(id)a0 error:(id *)a1;
- (id)statWithError:(id *)a0;

@end
