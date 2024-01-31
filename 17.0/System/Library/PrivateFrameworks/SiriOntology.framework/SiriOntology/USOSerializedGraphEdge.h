@class NSString;

@interface USOSerializedGraphEdge : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int usoElementId;
@property unsigned long long fromVertex;
@property unsigned long long toVertex;
@property unsigned int enumeration;
@property (retain, nonatomic) NSString *edgeLabel;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUsoElementId:(int)a0 fromVertex:(unsigned long long)a1 toVertex:(unsigned long long)a2 enumeration:(unsigned int)a3;

@end
