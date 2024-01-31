@class NSString, NSArray, ATXHeuristicDevice;

@interface ATXHeuristicClipboardUtilities : NSObject {
    ATXHeuristicDevice *_heuristicDevice;
}

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *dataDetectors;
@property (retain, nonatomic) NSString *appName;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)_dataDetectorsWithContent:(id)a0;
- (id)_appNameFromBundleID:(id)a0;
- (void)_resetContents;
- (void)fetchContents;
- (id)resultWithActions:(id)a0 predictionReasons:(unsigned long long)a1;

@end
