@class NSString;

@interface ATXPosterEdit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *lockscreenId;
@property (readonly, copy, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic, getter=isNewlyCreated) BOOL newlyCreated;
@property (readonly, nonatomic) long long secondsSinceLastEdit;
@property (readonly, copy, nonatomic) NSString *outcome;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) BOOL userChangedColor;
@property (readonly, nonatomic) BOOL userChangedFont;
@property (readonly, nonatomic) BOOL userChangedNumberingSystem;
@property (readonly, nonatomic) BOOL userChangedPosterContent;
@property (readonly, nonatomic) BOOL userChangedWidgets;
@property (readonly, nonatomic) BOOL didLockscreenHaveWidgetsBeforeEdit;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLockscreenId:(id)a0 entryPoint:(id)a1 newlyCreated:(BOOL)a2 secondsSinceLastEdit:(long long)a3;
- (id)initWithLockscreenId:(id)a0 entryPoint:(id)a1 newlyCreated:(BOOL)a2 secondsSinceLastEdit:(long long)a3 outcome:(id)a4 userChangedColor:(BOOL)a5 userChangedFont:(BOOL)a6 userChangedNumberingSystem:(BOOL)a7 userChangedPosterContent:(BOOL)a8 userChangedWidgets:(BOOL)a9 didLockscreenHaveWidgetsBeforeEdit:(BOOL)a10 duration:(unsigned long long)a11;
- (BOOL)isEqualToATXPosterEdit:(id)a0;

@end
