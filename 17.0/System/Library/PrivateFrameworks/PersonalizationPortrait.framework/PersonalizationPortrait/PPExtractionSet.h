@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *namedEntityRecords;
@property (readonly, nonatomic) NSArray *topicRecords;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)merge:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)initWithNamedEntityRecords:(id)a0 topicRecords:(id)a1;

@end
