@class NSDate;
@protocol TLTimelineEntry;

@interface TLTimelineEntryNode : TLTimelineNode

@property (retain, nonatomic) id<TLTimelineEntry> entry;
@property (readonly, copy, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)leftEntryNode;
- (id)rightEntryNode;

@end
