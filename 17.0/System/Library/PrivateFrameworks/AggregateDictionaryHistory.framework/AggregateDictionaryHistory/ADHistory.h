@class NSString;

@interface ADHistory : NSObject

@property (readonly, nonatomic) NSString *path;

- (id)initWithPath:(id)a0;
- (BOOL)distributionsForKeyPrefix:(id)a0 minDaysSince1970:(int)a1 maxDaysSince1970:(int)a2 rowHandler:(id /* block */)a3;
- (id)initWithDefaultPath;
- (BOOL)scalarsForKeyPrefix:(id)a0 minDaysSince1970:(int)a1 maxDaysSince1970:(int)a2 rowHandler:(id /* block */)a3;

@end
