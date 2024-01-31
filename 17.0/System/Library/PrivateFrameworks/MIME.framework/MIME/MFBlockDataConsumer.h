@class NSString;

@interface MFBlockDataConsumer : NSObject <MFDataConsumer> {
    id /* block */ _appendHandler;
    id /* block */ _doneHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
