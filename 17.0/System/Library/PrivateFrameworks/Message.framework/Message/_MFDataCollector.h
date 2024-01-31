@class NSString, MFMailMessageLibrary, MFBufferedDataConsumer, MFLibraryMessage;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    NSString *_part;
    BOOL _partial;
    BOOL _incomplete;
    BOOL _relaxDataProtection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)appendData:(id)a0;
- (void)done;
- (id)data;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 message:(id)a1 part:(id)a2 partial:(BOOL)a3 incomplete:(BOOL)a4 relaxDataProtection:(BOOL)a5;
- (id)pathForStorage;

@end
