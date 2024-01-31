@class NSString, REMLElementComparator, NSObject;
@protocol OS_dispatch_queue;

@interface _REElementRankerWrapper : NSObject <REMLElementRanker>

@property (copy, nonatomic) id /* block */ featureMapGenerator;
@property (retain, nonatomic) REMLElementComparator *comparator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldHideElement:(id)a0;

@end
