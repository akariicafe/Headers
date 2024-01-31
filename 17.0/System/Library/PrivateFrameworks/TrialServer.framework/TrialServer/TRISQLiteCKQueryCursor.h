@class CKQuery;

@interface TRISQLiteCKQueryCursor : NSObject <NSCopying>

@property (retain, nonatomic) CKQuery *query;
@property (nonatomic) unsigned long long offset;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
