@class NSString, NSURL, AXAsset;

@interface AXSDDetector : NSObject {
    NSString *_modelName;
    AXAsset *_model;
    BOOL _enabled;
}

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) BOOL isCustom;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isDownloading;
@property (readonly, nonatomic) BOOL isCompatiable;
@property (readonly, nonatomic) BOOL isUsingSoundPrint;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelURLString;
@property (nonatomic) BOOL modelFailed;

- (id)initWithIdentifier:(id)a0;
- (id)initWithModel:(id)a0;
- (id)model;
- (id)properties;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isOlderThanDetector:(id)a0;

@end
