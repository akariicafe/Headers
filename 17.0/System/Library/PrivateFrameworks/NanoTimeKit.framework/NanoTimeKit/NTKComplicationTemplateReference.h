@class NSString, CLKComplicationTemplate;

@interface NTKComplicationTemplateReference : NSObject <NSCopying, NSSecureCoding> {
    CLKComplicationTemplate *_cachedTemplate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly, nonatomic) NSString *path;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_lock_complicationTemplate;
- (id)initWithPath:(id)a0 existingTemplate:(id)a1;

@end
