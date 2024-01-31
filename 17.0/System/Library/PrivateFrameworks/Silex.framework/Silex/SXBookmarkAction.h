@class NSString, SXJSONDictionary;
@protocol SXBookmark;

@interface SXBookmarkAction : NSObject <SXAction>

@property (readonly, nonatomic) id<SXBookmark> bookmark;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0;

@end
