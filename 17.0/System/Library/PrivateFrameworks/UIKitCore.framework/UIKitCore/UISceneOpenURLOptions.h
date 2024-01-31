@class BSProcessHandle, NSString, UIEventAttribution;
@protocol NSObject;

@interface UISceneOpenURLOptions : NSObject

@property (readonly, nonatomic) BSProcessHandle *_sourceProcessHandle;
@property (readonly, nonatomic) BOOL _openAsDownload;
@property (readonly, nonatomic) long long _contentOwner;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) id<NSObject> annotation;
@property (readonly, nonatomic) BOOL openInPlace;
@property (readonly, nonatomic) UIEventAttribution *eventAttribution;

+ (id)_optionsFromDictionary:(id)a0;
+ (id)_optionsFromPayload:(id)a0 sourceProcessHandle:(id)a1;

- (unsigned long long)hash;
- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3;
- (id)_initWithSourceApplication:(id)a0 processHandle:(id)a1 annotation:(id)a2 openInPlace:(BOOL)a3 eventAttribution:(id)a4 openAsDownload:(BOOL)a5 contentOwner:(long long)a6;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
