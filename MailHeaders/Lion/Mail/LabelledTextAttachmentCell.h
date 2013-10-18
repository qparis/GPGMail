/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTextAttachmentCell.h"

@class NSColor, NSImage, NSMutableAttributedString, NSString, NSView;

@interface LabelledTextAttachmentCell : NSTextAttachmentCell
{
    NSMutableAttributedString *_attrString;
    NSImage *_image;
    NSImage *_dimmedImage;
    NSColor *_highlightedColor;
    NSString *_label;
    unsigned int _linkState:2;
    unsigned int _isDisplayingLabel:1;
    unsigned int _drawWithBorder:1;
    double _maxWidth;
    NSView *_containingView;
    struct CGRect _attachmentDrawingRect;
    struct CGSize _fixedSize;
    BOOL _sizeIsFixed;
}

- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)labelFont;
- (id)labelColor;
- (id)initWithTextAttachment:(id)arg1;
- (void)dealloc;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)isDisplayingLabel;
- (void)setIsDisplayingLabel:(BOOL)arg1;
- (id)attributedString;
- (void)_makeString;
- (void)_discardDimmedImage;
- (id)_dimmedImage;
- (void)setAttachment:(id)arg1;
- (void)setDrawWithBorder:(BOOL)arg1;
- (void)setMaxWidth:(double)arg1;
- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)wantsToTrackMouse;
- (BOOL)wantsToTrackMouseForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)_trackLink:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(long long)arg4;
- (void)resetCursorAndToolTipRect:(struct CGRect)arg1 inView:(id)arg2;
- (int)linkState;
- (void)setLinkState:(int)arg1;
- (id)highlightedColor;
- (void)setHighlightedWithColor:(id)arg1;
- (struct CGRect)_rectForImageInRect:(struct CGRect)arg1;
- (struct CGRect)_rectForLinkInRect:(struct CGRect)arg1;
- (struct CGRect)_quickLookRectForFrame:(struct CGRect)arg1;
- (id)_quickLookTransitionImage;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_showMenu;

@end
