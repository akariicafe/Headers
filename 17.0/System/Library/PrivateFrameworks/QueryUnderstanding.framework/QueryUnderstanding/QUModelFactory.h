@class NSBundle, NSSet, NSCondition, NSError, NSObject;
@protocol OS_os_transaction, QUUnderstandingModel;

@interface QUModelFactory : NSObject {
    NSCondition *_condition;
    int _state;
    id<QUUnderstandingModel> _quModel;
    NSSet *_unsupportedLocaleIdentifiers;
    NSObject<OS_os_transaction> *_transaction;
    id /* block */ _releaseBlock;
}

@property (class, nonatomic) BOOL useSpotlightResources;
@property (class, retain, nonatomic) NSBundle *U2HeadBundle;

@property (retain, nonatomic) NSError *loadError;

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)getModelForLocale:(id)a0 withTimeoutMS:(unsigned int)a1;
- (void)releaseModel;
- (id)quModel;

@end
