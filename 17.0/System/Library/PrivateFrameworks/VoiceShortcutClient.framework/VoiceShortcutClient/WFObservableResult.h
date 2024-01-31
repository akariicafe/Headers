@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface WFObservableResult : NSObject

@property (readonly, nonatomic) Class valueType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerNotificationQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL observingDistributedNotifications;

+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 roundedIcon:(BOOL)a2 synchronously:(BOOL)a3 completion:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopConnection;
- (void)addResultObserver:(id)a0;
- (void)databaseDidChange:(id)a0;
- (void)handleChangeNotification:(id)a0;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1;
- (void)removeResultObserver:(id)a0;
- (void)startConnectionIfNecessary;

@end
