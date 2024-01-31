@class NSString, NSObject;
@protocol OS_os_log;

@interface ContentItemMarkupGenerator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDisplayableInlineContentItem:(id)a0;
+ (id)attachmentElementMarkupStringForContentItem:(id)a0;
+ (BOOL)isDisplayableImageContentItem:(id)a0;
+ (BOOL)isPDFContentItem:(id)a0;
+ (id)markupStringForDisplayForContentItem:(id)a0;


@end
