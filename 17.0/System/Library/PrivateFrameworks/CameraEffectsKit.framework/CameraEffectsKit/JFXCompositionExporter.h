@class NSString, JFXComposition, NSDate, JFXReaderWriterExportController;
@protocol JFXExportDelegate, JFXCompositionPlayableElementsDataSource;

@interface JFXCompositionExporter : NSObject <JFXExportDelegate>

@property (retain, nonatomic) JFXComposition *composition;
@property (retain, nonatomic) JFXReaderWriterExportController *exportController;
@property (retain) NSDate *exportStartTime;
@property (retain) NSDate *exportEndTime;
@property (retain, nonatomic) id<JFXExportDelegate> delegate;
@property (nonatomic) unsigned int parentCode;
@property (readonly, nonatomic) id<JFXCompositionPlayableElementsDataSource> clipsDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)compositionClass;

- (void)dealloc;
- (void)tearDown;
- (void).cxx_destruct;
- (void)exportAnalyticsForSessionCompleteWithStatus:(long long)a0 exportMachDuration:(unsigned long long)a1;
- (void)cancelWithStatus:(long long)a0;
- (void)didFinishExport:(long long)a0;
- (unsigned long long)estimatedFileSizeForDuration:(int)a0 frameRate:(double)a1 preset:(id)a2;
- (void)exportAnalyticsForSessionBegin;
- (void)exportProgressedTo:(float)a0;
- (id)initWithClipsDataSource:(id)a0;
- (void)startWithPresets:(id)a0 toFilePath:(id)a1 poster:(id)a2;
- (double)timeElapsedDuringExport;

@end
