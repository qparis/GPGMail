/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPopUpButton.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSButton, NSMutableArray, NSPanel, NSString, NSTableView;

@interface SoundPopUpButton : NSPopUpButton <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_userSounds;
    NSString *_selectedItem;
    BOOL _configured;
    BOOL _showNone;
    NSButton *_removeSoundButton;
    NSTableView *_soundTableView;
    NSPanel *_soundPanel;
    id <SoundPopUpButtonDelegate> _delegate;
}

@property(nonatomic) id <SoundPopUpButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSPanel *soundPanel; // @synthesize soundPanel=_soundPanel;
@property(nonatomic) NSTableView *soundTableView; // @synthesize soundTableView=_soundTableView;
@property(nonatomic) NSButton *removeSoundButton; // @synthesize removeSoundButton=_removeSoundButton;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doneClicked:(id)arg1;
- (void)removeSoundClicked:(id)arg1;
- (void)addSoundClicked:(id)arg1;
- (void)_addRemoveMailSound:(id)arg1;
- (void)selectSoundPath:(id)arg1;
- (id)selectedSoundPath;
- (void)_playSound:(id)arg1;
- (void)_popupMenuChanged:(id)arg1;
@property(nonatomic) BOOL showNone;
- (void)_appendSoundsFromDirectories:(id)arg1;
- (void)configureSoundMenu;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_soundPopUpButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;

@end
