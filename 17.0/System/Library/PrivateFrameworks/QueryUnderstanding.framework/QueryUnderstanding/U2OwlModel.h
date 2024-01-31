@class QUEmbeddingService, NSString, U2HeadWrapper, NSLocale;

@interface U2OwlModel : NSObject <QUUnderstandingModel> {
    QUEmbeddingService *_embeddingService;
    U2HeadWrapper *_u2headWrapper;
}

@property (retain, nonatomic) NSLocale *locale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

@end
