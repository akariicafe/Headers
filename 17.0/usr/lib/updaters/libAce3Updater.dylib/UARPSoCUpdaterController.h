@class NSString, NSDictionary, SoCUpdaterHelper, NSMutableArray;

@interface UARPSoCUpdaterController : NSObject {
    SoCUpdaterHelper *_log;
    BOOL _skipSameVersion;
    NSMutableArray *_updaters;
    NSDictionary *_personalizationRequests;
    BOOL _forceLocalSigning;
}

@property (readonly) BOOL isDone;
@property (readonly) NSString *restorePartition;
@property (readonly) NSDictionary *personalizationRequests;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)applyStagedFirmware;
- (id)createUpdaterInstanceFor:(unsigned int)a0 helper:(id)a1 options:(id)a2;
- (id)firmwareTags;
- (BOOL)initializeUpdatersWithOptions:(id)a0;
- (unsigned int)numberOfAvailableUnits;
- (BOOL)offerFirmwareDataWithDictionary:(id)a0;
- (BOOL)offerFirmwareForUpdater:(id)a0 inputDict:(id)a1;
- (BOOL)offerPersonalizationDataWithDictionary:(id)a0;
- (id)queryInfo;
- (id)ticketNameTags;

@end
