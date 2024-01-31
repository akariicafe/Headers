@class NSString;

@interface PPAugmentedGazetteerMetadata : NSObject <PPConstructableFromStatement> {
    BOOL _isLocation;
    unsigned int _gazetteerDomain;
    NSString *_qid;
    double _threshold;
    NSString *_category;
    NSString *_alias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStatement:(id)a0;

@end
