@class NSString;
@protocol TSDHint;

@interface TPNullChildHint : TSPObject <TSDArchivedHint>

@property (retain, nonatomic) id<TSDHint> hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 hint:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
