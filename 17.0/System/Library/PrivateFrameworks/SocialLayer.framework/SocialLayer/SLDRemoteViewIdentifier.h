@class UISSlotStyle, SLDSlotTag;

@interface SLDRemoteViewIdentifier : NSObject

@property (retain, nonatomic) UISSlotStyle *style;
@property (retain, nonatomic) SLDSlotTag *tag;

+ (id)identifierForStyle:(id)a0 tag:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
