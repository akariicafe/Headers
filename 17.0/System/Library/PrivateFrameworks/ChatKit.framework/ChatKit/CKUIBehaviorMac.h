@interface CKUIBehaviorMac : CKUIBehaviorPad

- (id)theme;
- (Class)navigationBarClass;
- (struct CGSize { double x0; double x1; })avatarSize;
- (id)audioButtonName;
- (struct CGSize { double x0; double x1; })balloonMaskSize;
- (double)conversationListCellRightMargin;
- (double)emojiButtonSize;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentButtonSize;
- (double)previewMaxWidth;
- (double)searchLocationsCellCornerRadius;
- (double)avatarNameWidth;
- (id)balloonTextFont;
- (id)chatNavbarColor;
- (id)conversationListBoldSummaryFont;
- (double)detailsContactCellMinimumHeight;
- (id)replyButtonFont;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })searchConversationSectionInsets;
- (id)transcriptMessageStatusDateFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tuConversationBalloonEdgeInsets;
- (struct CGSize { double x0; double x1; })aggregateAcknowledgmentTranscriptBalloonSize;
- (id)appMenuAnimojiStickersIconForTraitCollection:(id)a0;
- (id)appMenuApplePayIconForTraitCollection:(id)a0;
- (id)appMenuEffectsIconForTraitCollection:(id)a0;
- (id)appMenuEmojiIconForTraitCollection:(id)a0;
- (id)appMenuHashtagImagesIconForTraitCollection:(id)a0;
- (id)appMenuPhotosIconForTraitCollection:(id)a0;
- (id)appMenuTitleFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attachmentReplyPreviewBalloonAlignmentRectInsets;
- (double)attributionCollapseButtonLeadingInset;
- (struct CGSize { double x0; double x1; })attributionCollapseButtonSize;
- (double)attributionCountAndImageViewPadding;
- (struct CGSize { double x0; double x1; })attributionCountViewImageSize;
- (struct CGSize { double x0; double x1; })attributionIconSize;
- (struct CGSize { double x0; double x1; })attributionStickerDetailsViewAvatarSize;
- (struct CGSize { double x0; double x1; })attributionStickerDetailsViewButtonSize;
- (struct CGSize { double x0; double x1; })attributionStickerDetailsViewImageSize;
- (struct CGSize { double x0; double x1; })attributionViewAvatarSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })attributionViewCollapsedModeInsets;
- (double)attributionViewHeight;
- (double)attributionViewMaxWidth;
- (double)attributionViewMinPadding;
- (double)attributionVoteCountTrailingInset;
- (id)audioBalloonSpeedFont;
- (id)audioBalloonTimeFont;
- (id)audioBalloonTranscriptionFont;
- (id)audioHintFont;
- (struct CGSize { double x0; double x1; })audioProgressViewSize;
- (double)audioReplyPreviewBalloonInset;
- (double)audioWaveformHeight;
- (double)autocompletePopOverLeftOffset;
- (double)avatarContactImageNameMargin;
- (id)avatarNameFont;
- (double)avatarSpacingMargin;
- (double)balloonContiguousSpace;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })balloonMaskAlignmentRectInsets;
- (struct CGSize { double x0; double x1; })balloonMaskTailSizeForTailShape:(char)a0;
- (double)balloonMaskTailWidth;
- (double)balloonMaxWidthPercent;
- (double)balloonNonContiguousSpace;
- (double)balloonSelectionLoadMoreSpinnerHeight;
- (double)balloonSelectionMaxScrollSpeed;
- (double)balloonSelectionScrollThresholdBottom;
- (double)balloonSelectionScrollThresholdTop;
- (id)balloonTextFontUserDefaults;
- (double)bottomConversationListSpace;
- (BOOL)browserButtonShouldUseMenu;
- (struct CGSize { double x0; double x1; })browserButtonSize;
- (id)businessInfoViewDescriptionTextFont;
- (id)businessInfoViewGreetingTextFont;
- (id)businessInfoViewTitleLabelFont;
- (BOOL)canPluginBalloonsUseOpaqueMask;
- (BOOL)canPresentOverKeyboard;
- (struct CGSize { double x0; double x1; })cancelButtonSize;
- (double)chatNavbarLeftMargin;
- (double)chatNavbarRightMargin;
- (id)chromeEffectForInterfaceStyle:(long long)a0;
- (double)collaborationDetailsPreferredContentSizeWidth;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collaborationOptionsPopoverInsets;
- (double)composeBalloonMaxWidthForEntryContentViewWidth:(double)a0;
- (BOOL)contactPhotosEnabled;
- (double)conversationListCellCloseButtonHeight;
- (double)conversationListCellCloseButtonWidth;
- (double)conversationListCellLeftMargin;
- (double)conversationListCellRoundSelectorLeftInset;
- (double)conversationListCellRoundSelectorRightInset;
- (double)conversationListContactImageDiameter;
- (double)conversationListContactImageTrailingSpace;
- (double)conversationListDragDistanceThreshold;
- (BOOL)conversationListHidesSearchBarWhenScrolling;
- (double)conversationListMinimumWidthForHiddenContactImage;
- (double)conversationListPinnedCellSelectedBackgroundCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })conversationListPinnedCellTitleLabelVerticalPadding;
- (id)conversationListPinnedConversationNameFont;
- (id)conversationListSenderFont;
- (id)conversationListSummaryFont;
- (BOOL)customFontEnabled;
- (id)customFontNameUserDefaults;
- (double)customFontSizeUserDefaults;
- (double)defaultConversationListWidth;
- (unsigned long long)defaultConversationLoadMoreCount;
- (long long)detailsActionViewStyle;
- (double)detailsAddButtonDiameter;
- (double)detailsCellLabelPadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })detailsContactCellButtonEdgeInsets;
- (double)detailsContactCellButtonHeight;
- (double)detailsContactCellButtonWidth;
- (double)detailsContactImageDiameter;
- (double)detailsDownloadAttachmentsHeaderiCloudImageAlphaForDarkMode;
- (double)detailsDownloadAttachmentsHeaderiCloudImageAlphaForLightMode;
- (double)detailsExpanseCellHeight;
- (double)detailsExpanseDescriptionLabelHeight;
- (double)detailsExpanseScreenShareCellHeight;
- (double)detailsGroupButtonHeight;
- (double)detailsGroupButtonWidth;
- (long long)detailsGroupChevronImageScale;
- (double)detailsInterGroupButtonPadding;
- (double)detailsMapViewInset;
- (double)detailsPreferredContentSizeHeight;
- (double)detailsPreferredContentSizeWidth;
- (unsigned long long)detailsSectionCount;
- (double)detailsSectionHeaderPaddingAbove;
- (double)detailsSectionHeaderPaddingBelow;
- (double)detailsToFieldPreferredHeight;
- (double)detailsViewMapHeight;
- (BOOL)effectPickerPresentsSelectionView;
- (BOOL)effectPickerShowsCloseButton;
- (struct CGSize { double x0; double x1; })emojiStickerTranscriptBalloonSize;
- (id)emojiStickerTranscriptCellFont;
- (BOOL)enableBalloonTextSelection;
- (double)entryContentViewTextLeftOffset;
- (double)entryViewAppButtonImagePointSize;
- (id)entryViewAppButtonName;
- (id)entryViewAudioButtonName;
- (BOOL)entryViewCoverHasOuterStroke;
- (double)entryViewCoverHorizontalMargin;
- (double)entryViewCoverMinHeight;
- (BOOL)entryViewFollowsKeyboardLayoutGuide;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewHorizontalCoverInsets;
- (id)entryViewMacCancelButtonName;
- (id)entryViewMacEmojiButtonImage;
- (id)entryViewMacStopButtonName;
- (double)entryViewMaxHeight;
- (struct CGSize { double x0; double x1; })entryViewPlusButtonSize;
- (BOOL)entryViewSupportsBrowserButton;
- (BOOL)entryViewSupportsPhotoButton;
- (BOOL)entryViewSupportsPlusButton;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewVerticalCoverInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })entryViewVerticalTextFieldInsets;
- (double)entryViewWithSendMenuBottomContentInsetWithKeyboardVisible;
- (double)entryViewWithSendMenuBottomContentInsetWithoutKeyboardVisible;
- (double)expandedToolbarHeightForMiiC;
- (double)fontSizeOffsetUserDefaults;
- (double)fontSizeUserDefaults;
- (BOOL)forceMinTranscriptMarginInsets;
- (long long)groupRecipientSelectionPresentationStyle;
- (id)imageBalloonSelectionOverlayColor;
- (id)iosMacDetailsButtonText;
- (BOOL)isEntryViewCollapsable;
- (BOOL)isEntryViewFirstResponderOnViewAppearance;
- (BOOL)isEntryViewInputAccessory;
- (BOOL)isSendButtonEnabledOnPlatform;
- (double)ktStatusCellImagePadding;
- (double)legacyMacAppMinConversationListWidth;
- (double)legacyMacAppSnapToMinConversationListWidth;
- (id)locationBoldButtonFont;
- (id)locationButtonFont;
- (double)macAppKitToolbarHeight;
- (double)macConversationListToolbarHeight;
- (double)macEffectPickerTitleLeadingPadding;
- (struct CGSize { double x0; double x1; })macJoinFaceTimeNSToolbarItemSize;
- (double)macNSToolbarItemInterItemSpacing;
- (struct CGSize { double x0; double x1; })macNSToolbarItemSize;
- (double)macNavbarBottomMargin;
- (double)macNavbarLeftMargin;
- (double)macNavbarRightMargin;
- (double)macTitleTrailingMargin;
- (double)macToLabelTrailingMargin;
- (id)macToolbarDetailsImage;
- (id)macToolbarDetailsImageName;
- (id)macToolbarFaceTimeImage;
- (id)macToolbarFaceTimeImageName;
- (double)macToolbarImagePointSize;
- (id)macToolbarJoinableFaceTimeAudioImageName;
- (id)macToolbarJoinableFaceTimeVideoImageName;
- (id)macToolbarJoinedFaceTimeAudioImageName;
- (id)macToolbarJoinedFaceTimeVideoImageName;
- (double)macToolbarStoplightButtonsLeadingPadding;
- (id)macToolbarSymbolConfiguration;
- (double)macTotalMarginWidth;
- (double)mapPreviewMaxWidth;
- (double)marzNavigationBarHeight;
- (double)maxConversationListWidth;
- (struct CGSize { double x0; double x1; })mediaObjectCachedIconSize;
- (id)mentionsCellNameFont;
- (double)messageAcknowledgementVotingViewHeight;
- (double)messageAcknowledgementVotingViewMaxWidth;
- (double)messageAcknowledgementVotingViewMinPadding;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentAnchorBubbleOffset;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentAnchorBubbleSize;
- (double)messageAcknowledgmentButtonMargin;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentIntermediateBubbleSize;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentPickerBarAcknowledgmentImageSize;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentPickerBarAcknowledgmentItemBalloonSize;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentPickerBarOffsetFromBalloon;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentPickerBarSize;
- (double)messageAcknowledgmentPickerMinHorizontalMargin;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentPillBubbleSize;
- (struct CGPoint { double x0; double x1; })messageAcknowledgmentTranscriptBalloonRelativePosition;
- (struct CGSize { double x0; double x1; })messageAcknowledgmentTranscriptBalloonSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })messageAcknowledgmentTranscriptGlyphInset;
- (struct CGPoint { double x0; double x1; })messageAcknowledgmentTranscriptOrganicBalloonAdditionalOffset;
- (id)messageAcknowledgmentVoteCountFont;
- (double)messageHighlightButtonGlyphSymbolPointSize;
- (double)minConversationListWidth;
- (struct CGSize { double x0; double x1; })minConversationListWidthComposeButtonSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })minTranscriptMarginInsets;
- (struct CGSize { double x0; double x1; })minWindowSize;
- (double)minWindowWidthPrimaryColumnOffset;
- (double)minimumWaveformHeight;
- (struct CGSize { double x0; double x1; })multilineBalloonMaskSize;
- (id)navbarDefaultLabelFont;
- (double)nicknameUpdatesBannerAvatarLeadingPadding;
- (id)nicknameUpdatesBannerBackgroundColor;
- (id)nicknameUpdatesSubtitleFont;
- (id)nicknameUpdatesTitleFont;
- (double)paddleDividerInset;
- (double)paddleOvelayRadius;
- (struct CGSize { double x0; double x1; })pinnedConversationActivityBroadShadowDarkOffset;
- (double)pinnedConversationActivityBroadShadowDarkOpacity;
- (double)pinnedConversationActivityBroadShadowDarkRadius;
- (struct CGSize { double x0; double x1; })pinnedConversationActivityBroadShadowLightOffset;
- (double)pinnedConversationActivityBroadShadowLightOpacity;
- (double)pinnedConversationActivityBroadShadowLightRadius;
- (struct CGSize { double x0; double x1; })pinnedConversationActivityTightShadowDarkOffset;
- (double)pinnedConversationActivityTightShadowDarkOpacity;
- (double)pinnedConversationActivityTightShadowDarkRadius;
- (struct CGSize { double x0; double x1; })pinnedConversationActivityTightShadowLightOffset;
- (double)pinnedConversationActivityTightShadowLightOpacity;
- (double)pinnedConversationActivityTightShadowLightRadius;
- (double)popOverMaxHeight;
- (double)popOverMaxHeightInDetailsView;
- (double)popOverWidth;
- (double)popOverWidthInDetailsView;
- (double)popoverHeightPadding;
- (double)popoverPadding;
- (BOOL)presentsAutocompleteInAPopover;
- (id)previewTitleFont;
- (id)quickSaveButtonImage;
- (id)quickSavePinImage;
- (id)recipientNameFont;
- (struct CGSize { double x0; double x1; })replyBalloonMaskSize;
- (double)replyBalloonMaskTailWidth;
- (double)replyBalloonMinHeight;
- (id)replyBalloonTextFont;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })replyButtonEdgeInsets;
- (double)replyButtonPadding;
- (struct CGSize { double x0; double x1; })replyDeleteBalloonMaskSize;
- (double)replyLineBracketRadius;
- (double)replyLineViewHorizontalPadding;
- (double)replyLineViewMaxWidth;
- (double)replyLineViewVerticalPadding;
- (double)replyLineWidth;
- (struct CGSize { double x0; double x1; })replyMultilineBalloonMaskSize;
- (struct CGSize { double x0; double x1; })replySkinnyBalloonMaskSize;
- (id)replyTranscriptOverlayEffect;
- (struct CGSize { double x0; double x1; })roundBalloonMaskSizeWithTailShape:(char)a0;
- (double)searchAttachmentsCellCornerRadius;
- (id)searchBarFont;
- (double)searchCellCornerRadius;
- (BOOL)searchControllerObscuresConversationList;
- (double)searchConversationMinAvatarLabelSpacing;
- (double)searchDetailsLeadingAndTrailingMaxPadding;
- (id)searchHeaderButtonFont;
- (id)searchHeaderFont;
- (id)searchIndexingSubtitleFont;
- (id)searchIndexingTitleFont;
- (double)searchLeadingAndTrailingMaxPadding;
- (double)searchLinksCellCornerRadius;
- (id)searchMessageBodyTextFont;
- (double)searchMessagesConversationToSenderSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })searchMessagesSectionInsets;
- (double)searchMessagesSenderToBalloonSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })searchNavbarCanvasInsets;
- (double)searchPhotosCellCornerRadius;
- (double)searchPhotosCellZKWAndDetailsCornerRadius;
- (double)searchPhotosInterItemSpacing;
- (double)searchPhotosInterItemSpacingDetailsView;
- (double)searchPhotosZKWAndDetailsInterItemSpacing;
- (id)searchResultLabelFont;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })searchResultsInsets;
- (double)searchResultsTitleHeaderBottomPadding;
- (double)searchResultsTitleHeaderTopPadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })searchSectionMarginInsets;
- (double)sendButtonSize;
- (long long)sendMenuPlusSymbolScale;
- (BOOL)shouldShowAvatarForWidth:(double)a0;
- (BOOL)shouldUnreadIndicatorChangeOnSelection;
- (BOOL)showsBalloonChevron;
- (BOOL)showsHoverToDeleteButton;
- (BOOL)showsHoverToDeleteButtonForNewCompose;
- (struct CGSize { double x0; double x1; })skinnyBalloonMaskSize;
- (double)snapToMinConversationListCellWidth;
- (double)snapToMinConversationListWidth;
- (double)spaceBetweenSearchBarAndComposeButton;
- (double)stopButtonSize;
- (BOOL)supportsOrbPreviewsInConversationList;
- (BOOL)suppressPinActivityForState:(id)a0;
- (id)syncProgressLabelFont;
- (struct CGSize { double x0; double x1; })taillessMultilineBalloonMaskSize;
- (id)textFontUserDefaults:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textReplyPreviewBalloonAlignmentRectInsets;
- (struct CGSize { double x0; double x1; })thumbnailFillSizeForWidth:(double)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (double)toFieldInterItemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })toFieldScrollViewInsets;
- (double)toFieldXOffset;
- (double)toFieldYOffset;
- (id)transcriptBoldFont;
- (id)transcriptButtonTextFont;
- (double)transcriptContactImageDiameter;
- (double)transcriptDrawerGestureAcceleration;
- (id)transcriptLightFont;
- (id)transcriptMessageStatusFont;
- (BOOL)transcriptMinBottomInsetIsEntryViewHeight;
- (double)transcriptQuickActionButtonDiameter;
- (id)transcriptRegularFont;
- (double)transcriptReplyPreviewContextContactImageDiameter;
- (id)transcriptSenderFont;
- (struct CGSize { double x0; double x1; })transcriptTypingIndicatorDefaultSize;
- (struct CGPoint { double x0; double x1; })transcriptTypingIndicatorLargeBubbleGrowOffset;
- (struct CGPoint { double x0; double x1; })transcriptTypingIndicatorLargeBubbleOffset;
- (struct CGSize { double x0; double x1; })transcriptTypingIndicatorLargeBubbleSize;
- (id)tuConversationBalloonActionButtonFont;
- (id)tuConversationBalloonActionButtonFontStyle;
- (double)tuConversationBalloonAvatarDimensions;
- (double)tuConversationBalloonButtonInteritemSpacing;
- (double)tuConversationBalloonContentMinHeight;
- (double)tuConversationBalloonContentStandardMinWidth;
- (double)tuConversationBalloonCornerRadius;
- (double)tuConversationBalloonFaceTimeIconDimensions;
- (double)tuConversationBalloonIconDimensions;
- (double)tuConversationBalloonImageDimensions;
- (double)tuConversationBalloonInsetPadding;
- (double)tuConversationBalloonInteritemSpacing;
- (double)tuConversationBalloonJoinButtonHeight;
- (double)tuConversationBalloonJoinButtonMaxWidth;
- (double)tuConversationBalloonJoinButtonMinWidth;
- (double)tuConversationBalloonScreenShareDeviceIconSize;
- (double)tuConversationBalloonTitleMaxStringWidth;
- (double)tuConversationBalloonTwoLineVerticalPadding;
- (double)tuConversationInsetPadding;
- (double)tuConversationInteritemSpacing;
- (double)tuConversationJoinButtonCornerRadius;
- (double)tuConversationJoinButtonHeight;
- (double)tuConversationJoinButtonMinWidth;
- (struct CGSize { double x0; double x1; })unreadIndicatorImageViewSize;
- (double)unreadIndicatorTotalMargins;
- (BOOL)useMacToolbar;
- (double)waveformHeight;

@end
