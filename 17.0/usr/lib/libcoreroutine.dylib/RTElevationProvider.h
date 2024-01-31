@class NSObject, CMAltimeter;
@protocol OS_dispatch_queue;

@interface RTElevationProvider : NSObject

@property (retain, nonatomic) CMAltimeter *altimeter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_fetchElevations:(id)a0 handler:(id /* block */)a1;
- (void)fetchElevations:(id)a0 handler:(id /* block */)a1;
- (BOOL)hasAltimeter;
- (id)initWithAltimeter:(id)a0;

@end
