@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (id)initWithAllDBSequenceMap:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSerializedSequenceString:(id)a0;
- (id)initWithMainDBSequence:(int)a0;
- (id)description;
- (int)mainDBSequence;
- (void).cxx_destruct;
- (int)sequenceForDatabaseID:(int)a0;
- (id)serializedSequenceString;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
