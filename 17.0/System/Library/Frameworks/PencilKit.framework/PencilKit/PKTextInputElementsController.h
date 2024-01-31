@class NSString, NSDictionary, UIView;
@protocol PKTextInputElementsControllerDelegate;

@interface PKTextInputElementsController : NSObject <PKTextInputDebugStateReporting> {
    long long _nextElementRecognitionIdentifierIndex;
    long long _finderGenerationCounter;
    long long _finderGenerationOfLastDiscoveredElements;
    id<PKTextInputElementsControllerDelegate> _delegate;
    UIView *_containerView;
    NSDictionary *_lastDiscoveredElementsByUniqueID;
    double _lastDiscoveredElementsUpdateTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reportDebugStateDescription:(id /* block */)a0;

@end
