@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSArray *filters;

- (id)initWithSubcommands:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithFilters:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
