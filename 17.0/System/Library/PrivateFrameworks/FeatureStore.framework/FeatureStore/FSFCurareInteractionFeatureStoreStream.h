@class NSString;
@protocol FSFFeatureStoreStream;

@interface FSFCurareInteractionFeatureStoreStream : NSObject <FSFStreamSourceProtocol> {
    id<FSFFeatureStoreStream> _biomeStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)createError:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0;
- (BOOL)insert:(id)a0 error:(id *)a1;
- (BOOL)deleteCurrentStream;
- (id)retrieve:(id)a0;
- (void)retrieve:(id)a0 completionHandler:(id /* block */)a1;

@end
