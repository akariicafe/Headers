@class NSSet;
@protocol OSADiagnosticWriteObserver;

@interface WriteObserver : NSObject

@property (readonly, weak, nonatomic) id<OSADiagnosticWriteObserver> observer;
@property (readonly, nonatomic) NSSet *bugTypes;

- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (void)deliverDidWrite:(id)a0 on:(id)a1;
- (void)deliverWillWrite:(id)a0 on:(id)a1;
- (id)initWithObserver:(id)a0 bugTypes:(id)a1;

@end
