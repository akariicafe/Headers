@class NSMutableArray, NSString, NSNumber, USOMatchInfo;

@interface USOEntitySpan : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *originAppId;
@property (retain, nonatomic) NSNumber *sourceComponent;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) USOMatchInfo *matchInfo;
@property (retain, nonatomic) NSMutableArray *properties;
@property (retain, nonatomic) NSNumber *startIndex;
@property (retain, nonatomic) NSNumber *endIndex;
@property (retain, nonatomic) NSMutableArray *alternatives;
@property (retain, nonatomic) NSString *originEntityId;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addAlternative:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginAppId:(id)a0 sourceComponent:(unsigned int)a1 label:(id)a2 matchInfo:(id)a3 properties:(id)a4 startIndex:(unsigned int)a5 endIndex:(unsigned int)a6 alternatives:(id)a7 originEntityId:(id)a8;
- (void)addSpanProperty:(id)a0;

@end
