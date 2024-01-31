@class NSString, NSDateFormatter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEONetworkEventFileManager : NSObject {
    NSObject<OS_dispatch_queue> *_syncQ;
    NSObject<OS_dispatch_source> *_closeTimer;
    NSDateFormatter *_dateFormatter;
    NSString *_fileDirectory;
    NSMutableDictionary *_netEventFiles;
    BOOL _needDir;
}

+ (id)sharedManager;

- (id)init;
- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (void)_startTimer;
- (void)_clearTimer;
- (void)_closeFiles;
- (BOOL)_createIfNeededNetworkEventDataDirectory:(id)a0;
- (id)_filepathFromDate:(id)a0;
- (void)commoninit;
- (int)fileDescriptorOfNetworkEventDataFileForRepresentativeDate:(id)a0;
- (void)saveNetworkEventData:(id)a0 atTime:(id)a1;

@end
