@class _TtC16RegulatoryDomain16RDStatusListener;

@interface RDStatusShareWrapper : NSObject

@property (retain) _TtC16RegulatoryDomain16RDStatusListener *listener;

- (id)init;
- (void).cxx_destruct;
- (void)stopListening;
- (void)listenForStatus:(id /* block */)a0;
- (void)listenForStatuses:(id /* block */)a0;

@end
