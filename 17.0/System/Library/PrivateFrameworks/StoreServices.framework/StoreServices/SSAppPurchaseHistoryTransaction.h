@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject

@property (readonly, nonatomic) SSSQLiteDatabase *database;

- (id)initWithDatabase:(id)a0;
- (void)dealloc;

@end
