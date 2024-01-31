@class NSString, NSArray, NSData, NSNumber;

@interface SLODLDInputContext : NSObject

@property (readonly, nonatomic) NSString *inputUtt;
@property (readonly, nonatomic) NSNumber *inputOrigin;
@property (readonly, nonatomic) NSNumber *inputAnchor;
@property (readonly, nonatomic) NSData *prevEmb;
@property (readonly, nonatomic) NSArray *prevTokens;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInputOrigin:(id)a0 inputAnchor:(id)a1 prevTokens:(id)a2 prevEmb:(id)a3;
- (void)updateWithInputUtt:(id)a0;

@end
