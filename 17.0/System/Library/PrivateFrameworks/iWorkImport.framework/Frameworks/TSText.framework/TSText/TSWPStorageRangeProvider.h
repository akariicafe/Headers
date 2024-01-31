@class NSString, NSObject;

@interface TSWPStorageRangeProvider : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject *object;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)rangeStart;
- (void).cxx_destruct;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeEnd;
- (void)setRangeStart:(unsigned long long)a0;
- (void)nextRange;

@end
