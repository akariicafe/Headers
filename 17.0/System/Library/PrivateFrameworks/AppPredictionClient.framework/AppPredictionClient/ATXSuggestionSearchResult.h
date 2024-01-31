@class NSUUID, ATXContextActionIdentifier, ATXProactiveSuggestion;

@interface ATXSuggestionSearchResult : SFSearchResult <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) ATXContextActionIdentifier *contextActionIdentifier;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBlendingModelUICacheUpdateUUID:(id)a0;
- (void)setContextActionIdentifier:(id)a0;
- (void)setProactiveSuggestion:(id)a0;

@end
